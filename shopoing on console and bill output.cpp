#include <iostream>
#include <iomanip>
#include <stdlib.h>
#define TAX 8.25/100
#define TV 400.00
#define VCR 220.00
#define REMOTE 35.00
#define CD 300.00
#define TAPE 150.00
using namespace std;

int main () {
    int TV_Q=0, VCR_Q=0, REMOTE_Q=0, CD_Q=0, TAPE_Q=0, chose=0,Q;
    float SUBTOTAL=0, TOTAL_TAX=0, TOTAL=0, TV_TOTAL_PRICE=0, VCR_TOTAL_PRICE=0, REMOTE_TOTAL_PRICE=0, CD_TOTAL_PRICE=0, TAPE_TOTAL_PRICE=0;

    do {
    	// output format of order list
        cout << setw(60)<<right<<"Hi Customer,  What do you want to order?"<<endl;
        cout <<"\t\t\t1. TV\n\t\t\t2. VCR\n\t\t\t3. Remote controller\n\t\t\t4. CD Player\n\t\t\t5. Tape Recorder\n\t\t\t6. I have done\n\t\t\t=>";
        cin >> chose;

        switch (chose){
        	//TV quantity validation and total price of tv
            case 1:
                do {
                    cout << "How much TV you want?\n->";
                    cin >> Q;
                    TV_Q += Q; //if reorder of the same item occurs the firt order will be saved
                    Q = 0;
					if (TV_Q < 0){
                        cout << "Error! the quantity can not be less than zero\n";
                        }
                }while(TV_Q < 0);
                    TV_TOTAL_PRICE = TV * TV_Q;
                    break;
            //VCR quantity validation and total price of tv
            case 2:
                do {
                    cout << "How much VCR you want?\n->";
                    cin >> Q;
                    VCR_Q += Q;
                    Q = 0;
                    if (VCR_Q < 0){
                        cout << "Error! the quantity can not be less than zero\n";
                        }
                }while(VCR_Q < 0);
                    VCR_TOTAL_PRICE = VCR * VCR_Q;
                    break;
            //REMOTE CTRLR quantity validation and total price of tv
			case 3:
                do {
                    cout << "How much Remote controller you want?\n->";
                    cin >>Q;
                    REMOTE_Q += Q;
                    Q = 0;
                    if (REMOTE_Q < 0){
                        cout << "Error! the quantity can not be less than zero\n";
                        }
                }while(REMOTE_Q < 0);
                    REMOTE_TOTAL_PRICE = REMOTE * REMOTE_Q;
                    break;
            //CD PLAYER quantity validation and total price of tv
			case 4:
                do {
                    cout << "How much CD Player you want?\n->";
                    cin >> Q;
                    CD_Q += Q;
                    Q = 0;
                    if (CD_Q < 0){
                        cout << "Error! the quantity can not be less than zero\n";
                        }
                }while(CD_Q < 0);
                    CD_TOTAL_PRICE = CD * CD_Q;
                    break;
            //TAPE RECORDER quantity validation and total price of tv
			case 5:
                do {
                    cout << "How much Tape Recorder you want?\n->";
                    cin >> Q;
                    TAPE_Q += Q;
                    Q = 0;
                    if (TAPE_Q < 0){
                        cout << "Error! the quantity can not be less than zero\n";
                        }
                }while(TAPE_Q < 0);
                    TAPE_TOTAL_PRICE = TAPE * TAPE_Q;
                    break;
            default:
                if (chose !=6){
                    cout << "\nError! please use the number on the menu!\n";
                    system("pause");
                }
        }
        system("cls");

    } while(chose != 6);

    system("cls");
		//bill header format
        if (TV_Q>0 || VCR_Q>0 || REMOTE_Q>0 || CD_Q>0 || TAPE_Q>0){
            cout << setw(12)<<" "<<setw(5)<<left<<"QTY"<<setw(18)<<"DESCRIPTION"<<setw(10)<<right<<"UNIT"<<setw(10)<<"TOTAL"<<endl;
            cout << setw(35)<<" "<<setw(10)<<"PRICE"<<setw(10)<<"PRICE"<<endl;
            cout << setw(12)<<" "<<setw(5)<<left<<"---"<<setw(18)<<"----------------"<<setw(10)<<right<<"-------"<<setw(10)<<"-------"<<endl;
     }
	//bill body total prices
    if (TV_TOTAL_PRICE > 0) {
        cout<<setprecision(2)<<showpoint<<fixed;
        cout << setw(12)<<" "<<setw(5)<<left<<TV_Q<<setw(18)<<"TV"<<setw(10)<<right<<TV<<setw(10)<<TV_TOTAL_PRICE<<endl;
    }if (VCR_TOTAL_PRICE > 0){
        cout<<setprecision(2)<<showpoint<<fixed;
        cout << setw(12)<<" "<<setw(5)<<left<<VCR_Q<<setw(18)<<"VCR"<<setw(10)<<right<<VCR<<setw(10)<<VCR_TOTAL_PRICE<<endl;
    }if(REMOTE_TOTAL_PRICE > 0){
        cout<<setprecision(2)<<showpoint<<fixed;
        cout << setw(12)<<" "<<setw(5)<<left<<REMOTE_Q<<setw(18)<<"REMOTE CONTROLER"<<setw(10)<<right<<REMOTE<<setw(10)<<REMOTE_TOTAL_PRICE<<endl;
    }if(CD_TOTAL_PRICE > 0){
        cout<<setprecision(2)<<showpoint<<fixed;
        cout << setw(12)<<" "<<setw(5)<<left<<CD_Q<<setw(18)<<"CD"<<setw(10)<<right<<CD<<setw(10)<<CD_TOTAL_PRICE<<endl;
    }if(TAPE_TOTAL_PRICE > 0){
        cout<<setprecision(2)<<showpoint<<fixed;
        cout << setw(12)<<" "<<setw(5)<<left<<TAPE_Q<<setw(18)<<"TAPE RECORDER"<<setw(10)<<right<<TAPE<<setw(10)<<TAPE_TOTAL_PRICE<<endl;
    }
    //bill total subtotal and tax
        SUBTOTAL = TV_TOTAL_PRICE + VCR_TOTAL_PRICE + REMOTE_TOTAL_PRICE + CD_TOTAL_PRICE + TAPE_TOTAL_PRICE;
    if (SUBTOTAL > 0){
        TOTAL_TAX = SUBTOTAL * TAX;
        TOTAL = SUBTOTAL + TOTAL_TAX;
        cout <<setprecision(2)<<showpoint<<fixed;
        cout << setw(18)<<" "<<setw(20)<<"______________________________\n"<<endl;
        cout << setfill(' ')<<setw(20)<<" "<<setw(10)<<left<<"SUBTOTAL"<<setw(10)<<right<<SUBTOTAL<<endl;
        cout << setw(20)<<" "<<setw(10)<<left<<"TAX"<<setw(10)<<right<<TOTAL_TAX<<endl;
        cout << setw(20)<<" "<<setw(10)<<left<<"TOTAL"<<setw(10)<<right<<TOTAL<<endl;
        cout << setw(1);
        cout << setw(20)<<" "<<"__________________"<<endl;


        cout <<"thank you! for having our products."<<endl;
        cout <<"Good day!";
	}
	if (chose != 6){
        cout << "you did't order any thing today \nGood day!";
	}

    return 0;
}
