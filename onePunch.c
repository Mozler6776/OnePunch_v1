
// https://github.com/Mozler6776/OnePunch_v1.git

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main( int argc, char *argv[] ){
	int number;
	char command[100];
	char c;
	printf("Download tools? [press y for download or another argument for continue]: ");
	scanf("%c", &c);
	
	if((c == 'y')){
			system("apt install steghide");
			system("apt install stegcracker");
			system("apt install foremost");
			system("apt install exiftool");
			system("apt install exiv2");
			system("apt install binwalk");
			system("apt install fcrackzip");
			printf("packets were installed");
	}

	printf("\n\n+---------------------------------------------------------------+\n");
	printf("| Author	: Mehmet Ozler Celik\t\t\t\t|\n");
	printf("| LinkedIn	: https://linkedin.com/in/mehmetozlercelik/\t|\n");
	printf("| Github	: https://github.com/mozler6776/\t\t|\n");
	printf("| Twitter	: https://twitter.com/mozler6776/\t\t|\n");
	printf("| Website	: https://mehmetozlercelik.com/\t\t\t|\n");
	printf("+---------------------------------------------------------------+\n");
	printf("\n");
	printf("\n");
	printf("\t\t+-------------------------------+\n");
	printf("\t\t|\t1 - Crypto\t\t|\n");
	printf("\t\t|\t2 - Stego\t\t|\n");
	printf("\t\t|\t3 - strings\t\t|\n");
	printf("\t\t|\t4 - fcrackzip\t\t|\n");
	printf("\t\t|\t99 - All\t\t|\n");
	printf("\t\t+-------------------------------+\n");
	printf("\n");
	printf("\n");
	printf("[+] Usage: ./onepunch [<file> or <string>] [<wordlist>]\n");
	printf("\n");
	printf("[!] If you do not have tools please download.\n");
	printf("[+] Example: apt install steghide\n");
	printf("\n");
	system("mkdir outputs_onepunch/");
	printf("\n");
	printf("[ Please select number ] $ ");
	scanf("%d", &number);
	
	
	
	switch(number){
		/*				Cryptology methods				*/
		case 1:
			printf("\n");
			printf("+-------------------------------+\n");
			printf("|\tCryptology methods\t|\n");
			printf("+-------------------------------+\n");
			printf("|\t1 - Base16 (Hexadecimal)|\n");
			printf("|\t2 - Base32\t\t|\n");
			printf("|\t3 - Base64\t\t|\n");
			printf("|\t4 - Base58\t\t|\n");
			printf("+-------------------------------+\n");
			printf("\n");
			printf("[ Please select number ] $ ");
			scanf("%d", &number);
			switch(number){
				/*				Base16			*/
				case 1: 
					printf("|\tBase16 (Hexadecimal)\t|\n");
					printf("|\t1 - Encode\t\t|\n");
					printf("|\t2 - Decode\t\t|\n");
					printf("|\t3 - File encode (Only files)\t\t|\n");
					printf("|\t4 - File decode (Only files)\t\t|\n");
					printf("\n");
					printf("[ Please select number ] $ ");
					scanf("%d", &number);
					
					switch(number){
						
						case 1:
							printf("'%s' encrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo %s | xxd -ps -c 200 | tr -d '\n'", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 2:
							printf("'%s' decrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo %s | xxd -r -p", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 3:
							printf("File: '%s' \nencrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | xxd -ps -c 200 | tr -d '\n' > outputs_onepunch/base16_file_encoded.txt", argv[1]);
							system(command);
							printf("Successful. Encrypted text in 'outputs_onepunch/base16_file_encoded.txt'\n");
							printf("\n");
							break;
							
						case 4:
							printf("File: '%s' \ndecrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | xxd -r -p > outputs_onepunch/base16_file_decoded.txt", argv[1]);
							system(command);
							printf("Successful. Decrypted text in 'outputs_onepunch/base16_file_decoded.txt'\n");
							printf("\n");
							break;
							
						default:
							printf("[!] Invalid argument");
							printf("\n");
							break;
					}
					break;
					/*				Base32			*/
				case 2: 
					printf("|\t\t\tBase32\t\t|\n");
					printf("|\t1 - Encode (Only strings)\t\t|\n");
					printf("|\t2 - Decode (Only strings)\t\t|\n");
					printf("|\t3 - File encode (Only files)\t\t|\n");
					printf("|\t4 - File decode (Only files)\t\t|\n");
					printf("\n");
					printf("[ Please select number ] $ ");
					scanf("%d", &number);
					
					switch(number){
						
						case 1:
							printf("'%s' encrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo -n %s | base32", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 2:
							printf("'%s' decrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo -n %s | base32 --decode", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 3:
							printf("File: '%s' \nencrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base32 > outputs_onepunch/base32_file_encoded.txt", argv[1]);
							system(command);
							printf("Successful. Encrypted text in 'outputs_onepunch/base32_file_encoded.txt'\n");
							printf("\n");
							break;
							
						case 4:
							printf("File: '%s' \ndecrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base32 --decode > outputs_onepunch/base32_file_decoded.txt", argv[1]);
							system(command);
							printf("Successful. Decrypted text in 'outputs_onepunch/base32_file_decoded.txt'\n");
							printf("\n");
							break;
							
						default:
							printf("[!] Invalid argument");
							break;
					}
					
					break;
					/*				Base64			*/
				case 3: 
					printf("|\t\t\tBase64\t\t\t|\n");
					printf("|\t1 - Encode (Only strings)\t\t|\n");
					printf("|\t2 - Decode (Only strings)\t\t|\n");
					printf("|\t3 - File encode (Only files)\t\t|\n");
					printf("|\t4 - File decode (Only files)\t\t|\n");
					printf("\n");
					printf("[ Please select number ] $ ");
					scanf("%d", &number);
					
					switch(number){
						
						case 1:
							printf("'%s' encrypting...\n", argv[1]);
							sleep(1);
							printf("\n");
							sprintf(command, "echo -n %s | base64", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 2:
							printf("'%s' decrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo -n %s | base64 --decode", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 3:
							printf("File: '%s' \nencrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base64 > outputs_onepunch/base64_file_encoded.txt", argv[1]);
							system(command);
							printf("\n");
							printf("Successful. Encrypted text in 'outputs_onepunch/base64_file_encoded.txt'\n");
							break;
							
						case 4:
							printf("File: '%s' \ndecrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base64 --decode > outputs_onepunch/base64_file_decoded.txt", argv[1]);
							system(command);
							printf("\n");
							printf("Successful. Decrypted text in 'outputs_onepunch/base64_file_decoded.txt'\n");
							break;
							
						default:
							printf("[!] Invalid argument");
							break;
					}
					break;
					/*				Base58			*/
				case 4: 
					printf("|\t\t\tBase58\t\t|\n");
					printf("|\t1 - Encode (Only strings)\t\t|\n");
					printf("|\t2 - Decode (Only strings)\t\t|\n");
					printf("|\t3 - File encode (Only files)\t\t|\n");
					printf("|\t4 - File decode (Only files)\t\t|\n");
					printf("\n");
					printf("[ Please select number ] $ ");
					scanf("%d", &number);
					
					switch(number){
						
						case 1:
							printf("'%s' encrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo -n %s | base58", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 2:
							printf("'%s' decrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "echo -n %s | base58 --decode", argv[1]);
							system(command);
							printf("\n");
							break;
							
						case 3:
							printf("File: '%s' \nencrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base58 > outputs_onepunch/base58_file_encoded.txt", argv[1]);
							system(command);
							printf("\n");
							printf("Successful. Encrypted text in 'outputs_onepunch/base58_file_encoded.txt'\n");
							break;
							
						case 4:
							printf("File: '%s' \ndecrypting...\n", argv[1]);
							sleep(1);
							sprintf(command, "cat %s | base58 --decode > outputs_onepunch/base58_file_decoded.txt", argv[1]);
							system(command);
							printf("\n");
							printf("Successful. Decrypted text in 'outputs_onepunch/base58_file_decoded.txt'\n");
							break;
							
						default:
							printf("[!] Invalid argument");
							break;
					}
					break;
					
				default:
					printf("[!] Invalid argument");
					break;	
			}
			break;
			/*				steganography methods				*/
		case 2:
			printf("\n");
			printf("+-------------------------------+\n");
			printf("|\tsteganography methods\t|\n");
			printf("+-------------------------------+\n");
			printf("|\t1 - steghide\t\t|\n");
			printf("|\t2 - stegcracker\t\t|\n");
			printf("|\t3 - zsteg\t\t|\n");
			printf("|\t4 - foremost\t\t|\n");
			printf("|\t5 - exiftool\t\t|\n");
			printf("|\t6 - exiv2\t\t|\n");
			printf("|\t7 - binwalk\t\t|\n");
			printf("|\t99 - All\t\t|\n");
			printf("+-------------------------------+\n");
			printf("\n");
			printf("[ Please select number ] $ ");
			scanf("%d", &number);
			
			switch(number){
				/*				steghide				*/
				case 1:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					sprintf(command, "steghide extract -sf %s", argv[1]);
					system(command);
					printf("\n");
					break;
					/*				stegcracker			*/
				case 2:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					if(argc == 3){
						sprintf(command, "stegcracker %s %s", argv[1], argv[2]);
					}else{
						sprintf(command, "stegcracker %s", argv[1]);
					}
					system(command);
					printf("\n");
					break;
					/*				foremost			*/
				case 3: 
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					sprintf(command, "foremost -i %s", argv[1]);
					system(command);
					printf("\n");
					break;
					/*				exiftool			*/
				case 4:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					sprintf(command, "exiftool %s", argv[1]);
					system(command);
					printf("\n");
					break;
					/*				exiv2				*/
				case 5:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					sprintf(command, "exiv2 %s", argv[1]);
					system(command);
					printf("\n");
					break;
					/*				Binwalk				*/
				case 6:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+-------------------------------+\n");
					sprintf(command, "binwalk %s", argv[1]);
					system(command);
					printf("\n+-------------------------------+\n");
					sleep(2);
					sprintf(command, "binwalk -e %s", argv[1]);
					system(command);
					printf("\n");
					break;
					/*				All				*/
				case 99:
					printf("\n");
					printf("File: %s\n", argv[1]);
					printf("\n+--------- steghide ---------+\n");
					sprintf(command, "steghide extract -sf %s", argv[1]);
					system(command);
					
					printf("\n+--------- stegcracker ---------+\n");
					if(argc == 3){
						sprintf(command, "stegcracker %s %s", argv[1], argv[2]);
						system(command);
						break;
					}
					sprintf(command, "stegcracker %s", argv[1]);
					system(command);
					
					printf("\n+--------- foremost ---------+\n");
					sprintf(command, "foremost -i %s", argv[1]);
					system(command);
					
					printf("\n+--------- exiftool ---------+\n");
					sprintf(command, "exiftool %s", argv[1]);
					system(command);
					
					printf("\n+--------- exiv2 ---------+\n");
					sprintf(command, "exiv2 %s", argv[1]);
					system(command);
			
					printf("\n+--------- Binwalk ---------+\n");
					sprintf(command, "binwalk %s", argv[1]);
					system(command);
					sleep(1);
					sprintf(command, "binwalk -e %s", argv[1]);
					system(command);
					printf("\n");
					break;
					
				default:
					printf("[!] Invalid argument");
					printf("\n");
					break;	
			}
			break;
			
		case 3: //strings
			printf("\n");
			sprintf(command, "strings %s > outputs_onepunch/strings_output.txt", argv[1]);
			system(command);
			printf("Successful. 'outputs_onepunch/strings_output.txt' created.\n");
			break;

		case 4: //strings
			printf("\n");
			if((argc == 3)){
				sprintf(command, "fcrackzip -u -D -p %s %s", argv[1], argv[2]);
				system(command);
				break;
			}
			sprintf(command, "fcrackzip -u -D -p %s", argv[1]);
			system(command);
			break;
		case 99:
			printf("\n");
			
			system("touch outputs_onepunch/all_output.txt");
			printf("File: %s\n", argv[1]);
			/*				hexadecimal file encode				*/
			system("echo 'FILE_ENCODED_HEX: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | xxd -ps -c 200 | tr -d '\n' >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*				hexadecimal file decode				*/
			system("echo 'FILE_DECODED_HEX: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | xxd -r -p >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*				base32 file encode					*/
			system("echo 'FILE_ENCODED_BASE32: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | base32 >> outputs_onepunch/all_output.txt", argv[1]);
			system(command);
			/*				base32 file decode					*/
			system("echo 'FILE_DECODED_BASE32: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | base32 --decode >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*				base64 file encode					*/
			system("echo 'FILE_ENCODED_BASE64: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | base64 >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*				base64 file decode					*/
			system("echo 'FILE_DECODED_BASE64: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "cat %s | base64 --decode >> outputs_onepunch/all_output.txt", argv[1]);
			system(command);
			/*					steghide					*/
			system("echo 'STEGHIDE: ' >> outputs_onepunch/all_output.txt");
			sleep(1);																					
			sprintf(command, "steghide extract -sf %s >> outputs_onepunch/all_output.txt", argv[1]);
			system(command);
			/*					foremost					*/
			system("echo 'FOREMOST: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "foremost -i %s >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*					exiftool					*/
			system("echo 'EXIFTOOL: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "exiftool %s >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*					exiv2					*/
			system("echo 'EXIV2: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "exiv2 %s >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			/*					Binwalk					*/
			system("echo 'BINWALK: ' >> outputs_onepunch/all_output.txt");
			sprintf(command, "binwalk %s >> outputs_onepunch/all_output.txt", argv[1]); 
			system(command);
			sleep(1);
			sprintf(command, "binwalk -e %s >> outputs_onepunch/all_output.txt", argv[1]);
			system(command);
		 	/*					stegcracker					*/
			system("echo 'STEGCRACKER: ' >> outputs_onepunch/all_output.txt");
			if(argc == 3){
				sprintf(command, "stegcracker %s %s >> outputs_onepunch/all_output.txt", argv[1], argv[2]);
			}else{
				sprintf(command, "stegcracker %s >> outputs_onepunch/all_output.txt", argv[1]);
			}
			system(command);
			/*					Finish						*/
			printf("\n");
			printf("'outputs_onepunch/all_output.txt' created.");
			break;
			
		default:
			printf("Invalid argument.");
			break;
	}
	return 0;
}
/*
------------ specification ------------------
printf("\n");
		printf("+-------------------------------+\n");
		printf("|\t methods\t|\n");
		printf("+-------------------------------+\n");
		printf("|\t1 - \t\t|\n");
		printf("|\t2 - \t\t|\n");
		printf("|\t3 - \t\t|\n");
		printf("|\t4 - \t\t|\n");
		printf("|\t5 - \t\t|\n");
		printf("|\t6 - \t\t|\n");
		printf("|\t7 - \t\t|\n");
		printf("|\t8 - \t\t|\n");
		printf("+-------------------------------+\n");
		printf("\n");
		printf("[ Please select number ] $ ");
		scanf("%d", &number);
		switch(number){
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			default:	
		}
*/
