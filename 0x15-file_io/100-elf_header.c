#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

int main(int argc, char *argv[]);

#define BUF_SIZE 1024

void print_elf_header_info(const Elf64_Ehdr *elf_header);


/**
 * main - Reads and prints information from the ELF header of an ELF file
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Cannot open file '%s'\n", argv[1]);
        exit(98);
    }

    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
    {
        fprintf(stderr, "Error: Failed to read ELF header\n");
        close(fd);
        exit(98);
    }

    print_elf_header_info(&elf_header);


    close(fd);
    exit(0);
}

/**
 * print_elf_header_info - Prints info from the ELF header
 * @elf_header: A pointer to the ELF header structure
 */
void print_elf_header_info(const Elf64_Ehdr *elf_header)
{
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %u-bit\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);

    printf("Data: ");
    switch (elf_header->e_ident[EI_DATA])
    {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown data encoding\n");
            break;
    }

    printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (elf_header->e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone (embedded) application\n");
            break;
        default:
            printf("Unknown OS/ABI\n");
            break;
    }

    printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (elf_header->e_type)
    {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("Unknown type\n");
            break;
    }

    printf("Entry point address: 0x%lx\n", elf_header->e_entry);
}
