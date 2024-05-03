//Annie Thai & Ivan Strunk
//5/2/24
//Purpose: Final project: Image processing

#include <stdio.h>

#define MAX_SIZE 100

char image[MAX_SIZE][MAX_SIZE];
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
		printf("this is where we load image\n\n");
	}
	
	void display_image() {
		printf("this is where we display image\n\n");
		}
	void edit_image() {
		int choice; 
		do {
		printf("**EDITING**\n"); 
		printf("1: Crop Image \n");
		printf("2: Dim image \n");
		printf("3: Brighten image\n");
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
		printf("dimming image\n\n");
		}
		
	void brighten_image() {
		printf("brightening image\n\n");
		}
	
