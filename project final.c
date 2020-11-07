/*                           *\

        CSE 115 Project
          Created By:

        Redwan Ali Rafi
        Ehsan Ul Hasan
        Umme Salma Ali

\*                           */



#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define sf; scanf
#define pf; printf

struct signup{
    char username[20];
    char upassword[20];
    char BG[5];
    char phone[14];
    char area[20];
    char yn[5];

};



void adminupdate(){

    system("cls");

    FILE *donated;
    FILE *users,*passwords,*bgf,*phonef,*areaf,*ynf;
    FILE *test;

    A:donated=fopen("/Project/database/donated.txt","r");

    char fbg[5],farea[20],fuser[20],fphone[15],ffarea[20];
	int c=0,l=0;


	    users=fopen("/Project/database/user.txt","r");
	    passwords=fopen("/Project/database/pass.txt","r");
	    bgf=fopen("/Project/database/bg.txt","r");
	    phonef=fopen("/Project/database/phone.txt","r");
	    areaf=fopen("/Project/database/area.txt","r");
	    ynf=fopen("/Project/database/yn.txt","r");


	int i=0;
	while(!feof(users)){
		i++;
		char temp[20],temp1[20];
		fscanf(bgf,"%s",temp);
		fscanf(ynf,"%s",temp1);
		fscanf(users,"%s",fuser);
		fscanf(phonef,"%s",fphone);
		fscanf(areaf,"%s",farea);



        pf("\t\t\t===============================\n");
        pf("\n\n\t\t\t%d.Username: %s",i,fuser);
        pf("\n\n\t\t\t   Phone: %s",fphone);
        pf("\n\n\t\t\t   Area: %s",farea);
        pf("\n\n\t\t\t   Active: %s\n\n",temp1);



	}

	//*======= Closing Files========= *//
	fclose(users);
	fclose(passwords);
	fclose(bgf);
	fclose(phonef);
	fclose(areaf);
	fclose(ynf);

    pf("\n\t\t\t===============================\n");
    pf("\n\t\t\t Donated Users: ");
    while(!feof(donated)){
        char tempx[20];
        fscanf(donated,"%s",tempx);
        printf("%s ",tempx);

    }
    pf("\n\t\t\t===============================\n");
    int inpu;
    pf("\n\n\t\t\t Press 1 for active , 2 for deactive user\n\t\t\t");
    sf("%d",&inpu);

    //*===========> YES/NO EDITING <============/

    if(inpu==1){

            ynf=fopen("/Project/database/yn.txt","r");
            test=fopen("/Project/database/test.txt","w");

		int counttt=0;char xxz[5];
		while(!feof(ynf)){
			counttt++;
			fscanf(ynf,"%s",xxz);
		}
		fclose(ynf);
		ynf=fopen("/Project/database/yn.txt","r");


        int l,i=0,j=0;
        pf("\n\n\t\t\tUser ID?: ")
        sf("%d",&l);
        char c,cc[5];
        while(i<counttt){
            fscanf(ynf,"%s",cc);
            i++;
            if(i==1){
                if(i!=l){
                    fprintf(test,"%s",cc);
                }
                else{
                    fprintf(test,"YES",cc);
                }
            }
            else {
                if(i!=l){
                    fprintf(test,"\n%s",cc);
                    }
                else{
                    fprintf(test,"\nYES",cc);
                }
            }
        }
        //fprintf(test,"\n");

        fclose(ynf);
        fclose(test);


            test=fopen("/Project/database/test.txt","r");
            ynf=fopen("/Project/database/yn.txt","w");
        i=0;
        while(!feof(test)){
            fscanf(test,"%s",cc);
            i++;
            if(i==1){
                fprintf(ynf,"%s",cc);
            }
            else {

                fprintf(ynf,"\n%s",cc);

            }

        }

        //fprintf(ynf,"\n");

        fclose(ynf);
        fclose(test);

        pf("\n\n\t\t\t\tDatabase updated. \n");

        pf("\n\n\n\t\t\t\tThank You\n\n");

    }



    else if(inpu==2){


            ynf=fopen("/Project/database/yn.txt","r");
            test=fopen("/Project/database/test.txt","w");

		int counttt=0;char xxz[5];
		while(!feof(ynf)){
			counttt++;
			fscanf(ynf,"%s",xxz);
		}
		fclose(ynf);
		ynf=fopen("/Project/database/yn.txt","r");


        int l,i=0,j=0;
        pf("\n\n\t\t\tUser ID?: ")
        sf("%d",&l);
        char c,cc[5];
        while(i<counttt){
            fscanf(ynf,"%s",cc);
            i++;
            if(i==1){
                if(i!=l){
                    fprintf(test,"%s",cc);
                }
                else{
                    fprintf(test,"NO",cc);
                }
            }
            else {
                if(i!=l){
                    fprintf(test,"\n%s",cc);
                    }
                else{
                    fprintf(test,"\nNO",cc);
                }
            }
        }
        //fprintf(test,"\n");

        fclose(ynf);
        fclose(test);


            test=fopen("/Project/database/test.txt","r");
            ynf=fopen("/Project/database/yn.txt","w");
        i=0;
        while(!feof(test)){
            fscanf(test,"%s",cc);
            i++;
            if(i==1){
                fprintf(ynf,"%s",cc);
            }
            else {

                fprintf(ynf,"\n%s",cc);

            }

        }

        //fprintf(ynf,"\n");

        fclose(ynf);
        fclose(test);

        pf("\n\n\t\t\t\tDatabase updated. \n");

        pf("\n\n\n\t\t\t\tThank You\n\n");
    }

    else{

        printf("\n\n\t\t\t\t Invalid Input\n\n");
    }

}



void adminpage(){

    system("cls");

	int opt;
	printf("\n\n\n\n\t\t\t\t Welcome Admin!\n\n\n\n");


	pf("\t\t\t Enter the number of Action:\n\n\n\n");

	pf("\t\t\t 1. Update Donors List\n\n\t\t\t\t");
	sf("%d",&opt);
	switch (opt)
	{

        case 1: adminupdate();break;
        default: pf("\n\t\t\t\tInvalid Input\n\n");

    }


}




void findblood(char cuser[]){

    system("cls");

	char fbg[5],farea[20],fuser[20],fphone[15],ffarea[20];
	int c=0,l=0;
	pf("\n\t\t\t Blood Group: ");
	sf("%s",fbg);
	l=strlen(fbg);
	pf("\n\n\t\t\t Area: ");
	sf("%s",ffarea);

	FILE *users,*passwords,*bgf,*phonef,*areaf,*ynf;
	    users=fopen("/Project/database/user.txt","r");
	    passwords=fopen("/Project/database/pass.txt","r");
	    bgf=fopen("/Project/database/bg.txt","r");
	    phonef=fopen("/Project/database/phone.txt","r");
	    areaf=fopen("/Project/database/area.txt","r");
	    ynf=fopen("/Project/database/yn.txt","r");


	int i=0,j=0;
	while(!feof(users)){
		i++;
		char temp[20],temp1[20];
		fscanf(bgf,"%s",temp);
		fscanf(ynf,"%s",temp1);
		fscanf(users,"%s",fuser);
		fscanf(phonef,"%s",fphone);
		fscanf(areaf,"%s",farea);

		//============= Compare if matched the bg and YES/NO and area ==============//

	    if(strcmp(temp,fbg)==0&&strcmp(temp1,"YES")==0&&strcmp(ffarea,farea)==0){

			pf("\n\n\t\t\t===============================\n");
			pf("\n\n\t\t\tUsername: %s",fuser);
			pf("\n\n\t\t\tPhone: %s",fphone);
			pf("\n\n\t\t\tArea: %s",farea);
			pf("\n\n\t\t\t===============================\n");

		}

	}
	//*======= Closing Files========= *//
	fclose(users);
	fclose(passwords);
	fclose(bgf);
	fclose(phonef);
	fclose(areaf);
	fclose(ynf);



	char temp2[5];
	pf("\n\n\n\t\t Did You Find Your Desiered Blood in Your Area?\n\n\t\t\t\t");
	sf("%s",temp2);
	if(strcmp(temp2,"YES")==0){

        pf("\n\n\n\t\t\t Enter the username of the user: ");

        char ussr[20];
        sf("%s",ussr);

        FILE *donated;
        donated=fopen("/Project/database/donated.txt","a+");
        fprintf(donated,"%s ",ussr);

		pf("\n\n\n\t\t\t Thank You for Using Our Servie \n\n");
	}
	else if(strcmp(temp2,"NO")==0){
		FILE *users,*passwords,*bgf,*phonef,*areaf,*ynf;
		    users=fopen("/Project/database/user.txt","r");
		    passwords=fopen("/Project/database/pass.txt","r");
		    bgf=fopen("/Project/database/bg.txt","r");
		    phonef=fopen("/Project/database/phone.txt","r");
		    areaf=fopen("/Project/database/area.txt","r");
		    ynf=fopen("/Project/database/yn.txt","r");
		while(!feof(users)){
			i++;
			char temp[20],temp1[20];
			fscanf(bgf,"%s",temp);
			fscanf(ynf,"%s",temp1);
			fscanf(users,"%s",fuser);
			fscanf(phonef,"%s",fphone);
			fscanf(areaf,"%s",farea);
			//pf("\n %s %d ",temp,i);



		    if(strcmp(temp,fbg)==0){
				pf("\n\n\t\t\t===============================\n");
				pf("\n\n\t\t\tUsername: %s",fuser);
				pf("\n\n\t\t\tPhone: %s",fphone);
				pf("\n\n\t\t\tArea: %s",farea);
				pf("\n\n\t\t\t===============================\n");
			}

		}
		//*======= Closing Files========= *//
		fclose(users);
		fclose(passwords);
		fclose(bgf);
		fclose(phonef);
		fclose(areaf);
		fclose(ynf);


	}

	//* If user didnt get desired blood , then the data will store in Donate Now *//

	pf("\n\n\n\t\t Did You Find Your Desiered Blood ?\n\n\t\t\t\t");
	sf("%s",temp2);
	if(strcmp(temp2,"YES")==0){

        pf("\n\n\n\t\t Enter the username of the user: ");

        char ussr[20];
        sf("%s",ussr);

        FILE *donated;
        donated=fopen("/Project/database/donated.txt","a+");
        fprintf(donated,"%s ",ussr);

		pf("\n\n\n\t\t\t Thank You for Using Our Servie \n\n");
	}
	else if(strcmp(temp2,"NO")==0){
		pf("\n\t\t Your Request is Submitted in Our List. \n\n");
		//*==== Adding the info to the donatenow list ====*//
		FILE *donate,*phone,*users;
			donate=fopen("/Project/database/donate.txt","a+");
			phone=fopen("/Project/database/phone.txt","r");
			users=fopen("/Project/database/user.txt","r");
		fprintf(donate,"\n%s ",cuser);
		fprintf(donate,"%s ",ffarea);

		/////==== scan the phone from file ========/////

		int ii=0;
		char tempuser[20];
		while(!feof(users)){
	        fscanf(users,"%s",tempuser);
	        ii++;

	        if(strcmp(tempuser,cuser)==0){
	            break;
	        }

	    }
	    int xx=0;
	    while(!feof(phone)){
	        fscanf(phone,"%s",tempuser);
	        xx++;

	        if(ii==xx){
	            break;
	        }

	    }

		fprintf(donate,"%s ",tempuser);
		fprintf(donate,"%s",fbg);

		fclose(donate);
		fclose(phone);
		fclose(users);
	}

}


void donatenow(){
    system("cls");
	FILE *donate;
		donate=fopen("/Project/database/donate.txt","r");
	int i=0;
	pf("\n\t\t\t List: \n");
	while(!feof(donate)){
	        A:char tempu[20];
	        fscanf(donate,"%s",tempu);
	        if(i==0){
	        	pf("\n\t\t\t====================================\n");
				pf("\n\t\t\tUsername: ");
			}
			else if(i==1){
				pf("\n\t\t\tAddress: ");
			}
			else if(i==2){
				pf("\n\t\t\tPhone: ");
			}
			else if(i==3){
				pf("\n\t\t\tBlood Group: ");

			}
	        printf("%s",tempu);
	        i++;
	        if(i==4){
	        	i=0;
			}




	}
	pf("\n\t\t\t====================================\n");


}


void homepage(char cuser[]){

    system("cls");

	pf("\n\n\t\t\t\tWelcome %s!\n\n\n\n",cuser);

	/*========= UI for users =========*/

	pf("\t\t\t Enter the number of Action:\n\n\n\n");

	pf("\t\t\t 1. Donate Now\n\n");
	pf("\t\t\t 2. Find Blood\n\n\t\t\t");

	int ac;
	sf("%d",&ac);
	if(ac==1){
		donatenow();
	}
	else if(ac==2){
		findblood(cuser);
	}
	else {
		printf("\n\n\t\t\t\t Invalid Input\n");
	}

}


int main()
{
	/*Homepage*/
	int in;
    pf("\n\n\t\t\t\t Don't let mosquitoes get your blood first.Be a Saviour!\n\n\n");

	pf("\n\n\n\t\t\t\t\t\tBloodHood\n\n");
	pf("\t\t\t\t 1. Sign In\n\n");
	pf("\t\t\t\t 2. Sign Up\n\n");
	pf("\t\t\t\t Input: ");
	sf("%d",&in);
	//newpage();
	if(in==1){
		/*//// Login Skip//////
		//homepage("BETA_TESTER");
		adminpage();
		return 0;
		/*===== Login Screen =====*/
        system("cls");


		char usr[20],pass[10];
	    printf("\n\n");
	    int i,j,k;



	    pf("\t\t\tUsername: ");
	    sf("%s",&usr);
	    pf("\t\t\tPassword: ");
	    for(i=0;i<8;i++){
	        pass[i]=getch();

	        if(pass[i]==13){
	            break;
	        }
	        pf("*");


	    }
	    pass[i]='\0';

        //  Admin login     //
        if(strcmp(usr,"admin")==0&&strcmp(pass,"11223")==0){

            adminpage();
            return 0;
        }

        if(strcmp(usr,"admin")==0&&strcmp(pass,"11223")!=0){

            pf("\n\n\t\t\t Invalid Admin Password\n\n");
            return 0;
        }

	    /*======== Comparing =========*/
	    int temp=0,ii=0,jj=0;
	    char cuser[10],cpass[10];
	    FILE *users,*passwords;
	    	users=fopen("/Project/database/user.txt","r");
	    	passwords=fopen("/Project/database/pass.txt","r");
	    while(!feof(users)){
	        fscanf(users,"%s",cuser);
	        ii++;
	        fscanf(passwords,"%s",cpass);
	        jj++;
	        if(strcmp(usr,cuser)==0&&strcmp(pass,cpass)==0&&ii==jj){
	            temp=1;
	            goto A;
	        }

	    }
	    if(temp==0){
	        pf("\n\n\t\tInvalid username or password\n");
	    }
	    else{
	    	A:fclose(users);
	    	fclose(passwords);

			///////// Open Homepage //////////
			homepage(cuser);

	    }
	}
	else if(in==2){

        system("cls");

		/* Sign Up page and Files Input */
        struct signup uinfo;

		FILE *userinfo;
		userinfo=fopen("/Project/database/userinfo.txt","a+");

		FILE *users,*passwords,*bgf,*phonef,*areaf,*ynf;
		    users=fopen("/Project/database/user.txt","a+");
		    passwords=fopen("/Project/database/pass.txt","a+");
		    bgf=fopen("/Project/database/bg.txt","a+");
		    phonef=fopen("/Project/database/phone.txt","a+");
		    areaf=fopen("/Project/database/area.txt","a+");
		    ynf=fopen("/Project/database/yn.txt","a+");


		/*/char username[20],upassword[20],BG[5],phone[14],area[20],yn[5],temp1[10];
            uinfo.username

		*/
		char temp1[10];
		pf("\n\n\t\t\t\tSIGN UP\n ");


		pf("\n\t\tuserame: ");
		sf("%s",uinfo.username);


		/* Compareing username form database */

		while(!feof(users)){
	        fscanf(users,"%s",temp1);
	        if(strcmp(temp1,uinfo.username)==0){
	            pf("\n\n\t\t\t\tUsername is Already Taken!\n\n\n");
	            return 0;
	        }
		}
		///////////// end //////////

		fprintf(userinfo,"%s ",uinfo.username);
		fprintf(users,"\n%s",uinfo.username);


		pf("\n\t\tPassword: ");
		sf("%s",uinfo.upassword);
		fprintf(userinfo,"%s ",uinfo.upassword);
		fprintf(passwords,"\n%s",uinfo.upassword);


		pf("\n\t\tBlood Group: ");
		sf("%s",uinfo.BG);
		fprintf(bgf,"\n%s",uinfo.BG);
		fprintf(userinfo,"%s ",uinfo.BG);


		pf("\n\t\tArea: ");
		sf("%s",uinfo.area);
		fprintf(userinfo,"%s ",uinfo.area);
		fprintf(areaf,"\n%s",uinfo.area);

		pf("\n\t\tPhone: ");
		sf("%s",uinfo.phone);
		fprintf(userinfo,"%s ",uinfo.phone);
		fprintf(phonef,"\n%s",uinfo.phone);

		pf("\n\tDo you wish to become a donor? If you agree type YES else NO (Upper Letter)\n\t");
		sf("%s",uinfo.yn);
		fprintf(userinfo,"%s\n",uinfo.yn);
		fprintf(ynf,"\n%s",uinfo.yn);


		//*======= Closing Files========= *//

		fclose(userinfo);
		fclose(users);
		fclose(passwords);
		fclose(bgf);
		fclose(phonef);
		fclose(areaf);
		fclose(ynf);


		pf("\n\n\t\t\t\tRegistration Complete! Thank You\n\n\n\n\n");
	}

    else{
        printf("\n\n\t\t\t\t Invalid Input\n");

    }
    return 0;
}

