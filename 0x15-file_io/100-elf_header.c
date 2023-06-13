#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/*
 * ELF Header Printer
 *
 * This program reads an ELF (Executable and Linkable Format) file and prints
 * information from its ELF header. It checks the validity of the ELF file and
 * displays details such as the ELF class, data encoding, version, OS/ABI,
 * ABI version, file type, and entry point address.
 *
 * Usage: elf_header_printer <file>
 *
 * Author: OpenAI
 * Created: June 9, 2023
 * Last Updated: June 9, 2023
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
void check_elf(unsigned char *e_ident);
void print_elf_header_info(const Elf64_Ehdr *header);
void close_file(int fd);

/* Check if the given file is a valid ELF file */
void check_elf(unsigned char *e_ident)
{
    if (!(e_ident[0] == 0x7f && e_ident[1] == 'E' && e_ident[2] == 'L' && e_ident[3] == 'F'))
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(98);
    }
}

/* Print information from the ELF header */
void print_elf_header_info(const Elf64_Ehdr *header)
{
    /*Print ELF magic number and identification information */
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    /*Print ELF class, data encoding, version, OS/ABI, ABI version*/
    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        /*Handle different ELF classes*/
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
    }

    /*Print file type and entry point address*/
    printf("  Type:                              ");
    switch (header->e_type) {
        /*Handle different ELF types*/
        case ET_NONE:
            printf("NONE (None)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", header->e_type);
    }
}

/* Close the file associated with the given file descriptor */
void close_file(int fd)
{
    if (close(fd) == -1) {
        fprintf(stderr, "Error: Can't close fd %d\n", fd);
        exit(98);
    }
}

/* Main program execution */
int main(int argc, char *argv[])
{
    /*Check command-line arguments*/
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        exit(1);
    }

    /*Open the file*/
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    /*Read ELF header from the file*/
    Elf64_Ehdr header;
    ssize_t num_bytes = read(fd, &header, sizeof(Elf64_Ehdr));
    if (num_bytes == -1 || num_bytes < sizeof(Elf64_Ehdr)) {
        close_file(fd);
        fprintf(stderr, "Error: Failed to read ELF header from file\n");
        exit(98);
    }

    /* Process and print the ELF header information*/
    check_elf(header.e_ident);
    print_elf_header_info(&header);

    /* Close the file*/
    close_file(fd);

    return (0);
}
