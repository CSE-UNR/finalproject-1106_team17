//Annie Thai & Ivan Strunk
//5/2/24
//Purpose: Final project: Image processing

#include <stdio.h>

#define MAX_SIZE 100

int image[MAX_SIZE][MAX_SIZE];
int rows, cols;

void load_image();
void display_image();
void crop_image();
void dim_image();
void brighten_image();
void save_image();
void edit_image();

int main() {
	int choice; 
	
	do {
		printf("**ERINSTAGRAM**\n"); //umm idk if she wants us to change the menu name
		printf("1: Load image \n");
		printf("2: Display image \n");
		printf("3: Edit image\n");
		printf("0: Exit\n\n");
		printf("Choose from one of the options above: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1: 
				load_image();
				break;
			case 2:
				display_image();
				break;
			case 3: 
				edit_image();
				break;
			case 0:
				printf("goodbye!\n");
				break;
			default:
				printf("Invalid option, please try again.\n");
			}
		} while (choice != 0);
		
		return 0;
	}
	
	void load_image() {
		char filename[100];
		printf("What is the photo files name?\n\n");
		printf("Put the name here: ");
		scanf("%s",filename);
		
		FILE *file = fopen(filename, "r");
		if (file == NULL){
			printf("Unable to open image");
			return;
		}
		
		fscanf(file,"%d %d", &rows, &cols);
		for(int i =0; i<rows; i++){
			for(int j=0; j<cols; j++){
				fscanf(file,"%d", &image[i][j]);
			}
		}
		
		fclose(file);
		printf("Image has been loaded\n");
		
	}
	
	void display_image() {
		printf("Displaying Image!\n");
		for(int i = 0; i < rows; i++){
			for(int j = 0; j < cols; j++){
			printf("%ls", &image[i][j]);
			}
		}
	}
	void edit_image() {
		int choice; 
		do {
		printf("**EDITING**\n"); 
		printf("1: Crop Image \n");
		printf("2: Dim image \n");
		printf("3: Brighten image\n");
		printf("4: Save image\n");
		printf("0: Return to main menu\n\n");
		printf("Choose from one of the options above: ");
		scanf("%d", &choice);
			
		switch (choice) {
			case 1: 
				crop_image();
				break;
			case 2:
				dim_image();
				break;
			case 3: 
				brighten_image();
				break;
			case 4: 
				save_image();
				break;
			case 0:
				return;
			default:
				printf("Invalid option, please try again.\n\n");
			}
		} while (choice != 0);
		
	}
	
	void crop_image() {
		printf("cropping image\n\n");
		}
		
	void dim_image() {
		for (int i = 0; i < rows; i++){
			for(int j = 0; j < cols; j++){
				if(image[i][j] < '0'){
				image[i][j]--;
				}
			}
		}
	}
		
	void brighten_image() {
		for (int i = 0; i < rows; i++){
			for(int j = 0; j < cols; j++){
				if(image[i][j] < '4'){
				image[i][j]++;
				}
			}
		}
	}
	void save_image(){
	char filename[100];
	printf("Enter filename of photo to save.");
	scanf("%s", filename);
	
	FILE *file = fopen(filename, "w");
		if (file == NULL){
			printf("Unable to save image");
			return;
		}
		
		fprintf(file,"%d %d\n", rows, cols);
		for(int i =0; i<rows; i++){
			for(int j=0; j<cols; j++){
				fprintf(file,"%d", image[i][j]);
			}
			fprintf(file,"\n");
		}
		
		fclose(file);
		printf("Image has been saved");
	
	}
	
	
	
	
