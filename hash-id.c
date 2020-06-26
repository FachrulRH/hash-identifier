#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>

void menu();
void loading();
void findHash(hash);
void about();
void help();
void SetColor(unsigned short color);

void main() {
               
	int term;
    char hash[100];
    system("color 2");
    printf("Load the Module\n");
    printf("Please Wait"); 
	load();
    system("cls");
    
    menu();
	printf("HashId> "); scanf("%d", &term);
	
	if (term == 1) {
		printf("Insert the Encryption: "); scanf("%s", &hash);
		findHash(hash);
	} 
	else if(term == 2) {
		about();	
	}
	else if(term == 3) {
		help();	
	}
	else if(term == 4) {
		printf("Exiting");
		load();
		printf("[+] Exited");
		exit(0);
	} else {
		SetColor(4);
		printf("Please Insert 1,2,3, or 4 Command !");
	}
}


void menu() {
	printf("  _  _         _      _    _         _   _  __ _         \n");
	printf(" | || |__ _ __| |_   (_)__| |___ _ _| |_(_)/ _(_)___ _ _ \n");
	printf(" | __ / _` (_-< ' \\  | / _` / -_) ' \\  _| |  _| / -_) '_|\n");
	printf(" |_||_\\__,_/__/_||_| |_\\__,_\\___|_||_\\__|_|_| |_\\___|_|  \n\n");
    printf("============[ Find Your Encryption Hash Type ]============\n\n");
    
    printf("[1] Start Find Type Your Encryption Hash\n");
    printf("[2] About\n");
    printf("[3] Help\n");
    printf("[4] Exit\n\n");
}

void findHash(hash) {
	int lenhash;
	lenhash = strlen(hash);
	
	printf("Finding hash type");
	load();
	SetColor(10);
	if(lenhash == 4) {
		printf("\n[+] Hash type found !\n");
		printf("[+] CRC16 [+]\n\n");
		SetColor(2);
		
		printf("Searching for another possible hash");
		load();
		
		SetColor(14);
		printf("\n[?] Another posible Hash\n");
		printf("=> CRC16CCITT\n");
		printf("=> FCS16");
		getch();
	} else if (lenhash == 8) {
		printf("\n[+] Hash type found !\n");
		printf("[+] CRC32 [+]\n\n");
		SetColor(2);
		
		printf("Searching for another possible hash");
		load();
		
		SetColor(14);
		printf("\n[?] Another posible Hash\n");
		printf("=> CRC32B\n");
		printf("=> ADLER32\n");
		printf("=> XOR32");
		getch();
	} else if (lenhash == 13) {
		printf("\n[+] Hash type found !\n");
		printf("[+] DESUnix [+]");
		getch(); 
	} else if (lenhash == 16) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MySQL [+]");
		getch();
	} else if (lenhash == 32) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MD5 [+]\n\n");
		SetColor(2);
		
		printf("Searching for another possible hash");
		load();
		
		SetColor(14);
		printf("\n[?] Another posible Hash\n");
		printf("=> NTLM");
		getch();
	} else if (lenhash == 34) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MD5Wordpress [+]");
		getch();
	} else if (lenhash == 37) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MD5APR [+]");
		getch();
	} else if (lenhash == 40) {
		printf("\n[+] Hash type found !\n");
		printf("[+] SHA1 [+]");
		getch();
	} else if (lenhash == 41) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MySQL160bit [+]");
		getch();
	} else if (lenhash == 49) {
		printf("\n[+] Hash type found !\n");
		printf("[+] MD5passsaltjoomla1 [+]");
		getch();
	} else if (lenhash == 52) {
		printf("\n[+] Hash type found !\n");
		printf("[+] SH1Django [+]");
		getch();
	} else if (lenhash == 56) {
		printf("\n[+] Hash type found !\n");
		printf("[+] SHA224 [+]");
		getch();
	} else if (lenhash == 64) {
		printf("\n[+] Hash type found !\n");
		printf("[+] SHA256 [+]");
		getch();
	} else if (lenhash == 65) {
		printf("\n[+] Hash type found !\n");
		printf("[+] SAM [+]");
		getch();
	} else {
		SetColor(4);
		printf("[-] Hash type not Found !");
	}
}

void load() {
	
	int i = 0;
	while(i <= 5) {
		printf(".");
		sleep(1);
		i++;
	}
}

void about() {
	system("cls");
	printf("Made By\n\n");
	printf("[+] Fachrul Ramdaniar Hidayatno\n");
	printf("[+] 1906098\n");
	printf("[+] T. Informatika C/2 \n\n");
	
	printf("Check My Other Tools: https://github.com/FachrulRH");
	getch();
}

void help() {
	system("cls");
	printf("INSTRUCTION :\n");
	printf("=> First you must have the encryption to identified it\n");
	printf("[?] If you don't have it use this encryption: caaef75b6a4e3e6db6ab20550a0281c2 (md5)\n");
	printf("=> Use menu 1 to identified the encryption\n");
	printf("=> Insert the encryption\n");
	printf("=> Waiting for the result\n");
	getch();
}

void SetColor(unsigned short color) {
	HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput,color);
}
