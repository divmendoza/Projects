#include <bits/stdc++.h>
using namespace std;
// STRUCTURE 1

struct structuree{
public:
    int user_mainMenu_handler;
};

structuree vare;

// STRUCTURE 2
struct structureLS{
public:
	// Variables for signLog class
	string enter;
	int sign_log;

	// Variables for Sign in
	map <int, int> credentials;
	int mNumber, pin, postal, id;

	// Variables for validating sign in credentials
	int passID, passPin;
};

structureLS varls; // Instantiation of structure

// STRUCTURE 3
struct structures{
public:
     int vehicleType_Handler, location_Handler, vehicleAvailability_Handler, balanceChoice_handler, salary, cashAdd, userAcc_Handler;
};

structures vars; // Instantiation of structure class

// STRUCTURE 4
struct structure1{
public:
	string name;
	int mop, stats, total;
	long plateNumber, idHandler;
};

structure1 var;

class Designs { // CLASS FOR DESIGNS
public:
    class setOfDesigns{
    public:
        void intro(){
            cout << "000000000🌍 HELLO, WORLD! 🌍0000000000" << endl;
            cout << "--------------------------------------" << endl;
            cout << "           Welcome to the \n Batangas Transport Management System! ";
            cout << "\n--------------------------------------" << endl;
            cout << "00000000000000000000000000000000000000" << endl;
        }
        void enter(){ cin.ignore(); }
        void brokenLines(){ cout << "--------------------------------------" << endl; }
        void blankLine(){ cout << " " << endl; }
        void blankLines(){ cout << " " << endl << endl; }
        void enterChoice(){
            cout << "--------------------------------------" << endl;
            cout << " 👨️ Enter your choice: ";
        }
        void hashtag(){ cout << "######################################" << endl; }
        void invalidInput(){
        	cout << " 👨️ Invalid choice. " << endl;
        	cout << "--------------------------------------" << endl;
        }
        void successfullRegister(){
        	cout << " 👨️ Successfully Registered! " << endl;
        	cout << "--------------------------------------" << endl;
        	blankLine();
        }
       void failedRegister(){
       	cout << " 👨️ Invalid Credentials. " << endl;
       	cout << "--------------------------------------" << endl;
       	blankLine();
       }
       void equalSign(){
           cout << "======================================" << endl;
       }
    };
};
class Templates{ // CLASS FOR TEMPLATES
public:
    class subTemp : public structure1{
    public:
        Designs :: setOfDesigns ss;
        void signLog_choices(){
            ss.brokenLines();
            cout << " 👨️ Please select an option: " << endl << endl;
            cout << "     1   |    Sign-in" << endl;
            cout << "     2   |    Log-in" << endl;
            ss.blankLine();
        }
        void SignTemplate(){
            ss.hashtag();
            cout << "             S I G N  I N " << endl;
            ss.hashtag();
            ss.blankLine();
        }
        void LogTemplate(){
            ss.hashtag();
            cout << "              L O G  I N " << endl;
            ss.hashtag();
            ss.blankLine();
        }
        void personalDetails(){
        	ss.brokenLines();
        	cout << "   P E R S O N A L   D E T A I L S " << endl;
        	ss.brokenLines();
        	ss.blankLine();
        }
        void receipt(int salary){
            int bill = 0;
        	cout << "    Name: ";
        	cin.ignore();
        	getline(cin, var.name);
        	ss.blankLine();
        	for(;;){
        		ss.brokenLines();

        		cout << " Mode of Payment: " << endl;
        		ss.blankLine();

        		cout << "     1   |    On hand" << endl;
        		cout << "     2   |    G-cash" << endl;

        		ss.blankLine();
        		ss.enterChoice();
            	cin >> var.mop;
            	ss.brokenLines();

            	if(var.mop == 1){
            		bill += 0;
            		break;
            	} else if(var.mop == 2){
            		bill += 25;
            		break;
            	} else {
            		ss.brokenLines();
            		ss.invalidInput();
					ss.blankLine();
            	}
        	}
        	for(;;){
        		cout << " Status: " << endl;
        		ss.blankLine();

        		cout << "     1   |    In a hurry" << endl;
        		cout << "     2   |    Normal state" << endl;

        		ss.blankLine();
        		ss.enterChoice();
        		cin >> var.stats;
        		ss.brokenLines();

        		if(var.stats == 1){
        			bill += 75;
        			break;
        		} else if(var.stats == 2){
        			bill += 0;
        			break;
        		} else {
        			ss.brokenLines();
        			ss.invalidInput();
        		}
        	}
            ss.equalSign();
            cout << "       BOOKED TRANSPORT RECEIPT " << endl;
            ss.equalSign();
            ss.blankLine();

            cout << "   Passenger Name: " << var.name << endl;
            ss.blankLine();

            if(var.mop == 1){
            	cout << "   Mode of Payment: On hand" << endl;
            	ss.blankLine();
            } else if(var.mop == 2){
            	cout << "   Mode of Payment: G-cash" << endl;
            	ss.blankLine();
            }

            if(var.stats == 1){
            	cout << "   Passenger Status: In a hurry" << endl;
            	ss.blankLine();
            } else if(var.stats == 2){
            	cout << "   Passenger Status: Normal state" << endl;
            	ss.blankLine();
            }

            var.plateNumber = rand() % 999;
            cout << "   The plate number of your booked" << endl
            	 << "   vehicle is " << var.plateNumber << endl;
            ss.blankLine();

        	structure1 *pointerVar = &var;
        	pointerVar -> total = salary - (bill + 100);

            if(pointerVar -> total > 0){
            	cout << "   Please pay P" << (bill + 100) << " for your" << endl
            		 << "   transport, thank you!" << endl;

            	ss.blankLine();
            	ss.brokenLines();

				structures *pointerVars = &vars;
				pointerVars -> salary = pointerVar -> total;

            	ss.enter();

            } else {
            	cout << "   Failed to process your transport due" << endl
            	     << "   to balance insufficiency, thank you! " << endl;
            	ss.brokenLines();
            	ss.equalSign();
            	cout << " 👨️ Your current balance is P" << salary << endl
            		 << " and your fee is P" << (bill + 100) << "." << endl;
            	ss.equalSign();
            	ss.enter();
            }
        }
        void mobileNumber(){
        	cout << " 📞  |  Mobile Number: +639";
        }
        void pin(){
        	cout << " 📌  |  Pin: ";
        }
        void postalCode(){
        	cout << " 🔒  |  Postal Code: ";
        }
        void passID(){
        	cout << " 👤  |  Passenger ID: ";
        }
        void displayMenu(){
        	ss.blankLine();
        	cout << "00000000000000000000000000000000000000" << endl;
        	ss.brokenLines();
        	cout << "      M  A  I  N     M  E  N  U      " << endl;
        	ss.brokenLines();
        	cout << "00000000000000000000000000000000000000" << endl;
        	ss.blankLine();
        }
        void one_to_four_menu(){
        	list <string> choices;
        	choices.push_back("BOOK A TRANSPORT");
        	choices.push_back("BALANCE");
        	choices.push_back("ACCOUNT");
        	choices.push_back("LOG OUT");
    		int i = 0;
        	for(auto menus : choices){
        		ss.equalSign();
        		cout << "    " << (i+1) << "    |     " << menus << endl;
        		ss.equalSign();
        		ss.blankLine();
        		i++;
        	}
        }
        void chooseOption(){
        	ss.brokenLines();
        	cout << "          CHOOSE A VEHICLE" << endl;
        	ss.brokenLines();
        	ss.blankLine();
        }
        void specificVehicle(){
        	queue <string> vehicles;
        	vehicles.push("     1    |   🏍  MOTORCYCLE");
        	vehicles.push("     2    |   🚕  TAXI");
        	vehicles.push("     3    |   🚐  VAN");
        	vehicles.push("     4    |   🚌  BUS ");

            while (!vehicles.empty()) {
                cout << vehicles.front() << endl;
                vehicles.pop();
            }
            ss.blankLine();
            ss.brokenLines();
			ss.blankLine();
        }
        void locations(){
        	ss.equalSign();
        	cout << "          CHOOSE A LOCATION" << endl;
        	ss.equalSign();
        	ss.blankLine();

        	locations2();
        }
        void locations2(){
        	list <string> batangas;

            batangas.push_back("Agoncillo"); batangas.push_back("Alitagtag"); batangas.push_back("Balayan");
            batangas.push_back("Balete");    batangas.push_back("Bauan");     batangas.push_back("Calaca");
            batangas.push_back("Calatagan"); batangas.push_back("Cuenca");    batangas.push_back("Ibaan");
            batangas.push_back("Laurel");    batangas.push_back("Lemery");    batangas.push_back("Lian");
            batangas.push_back("Lobo");      batangas.push_back("Mabini");    batangas.push_back("Malvar");
            batangas.push_back("Mataas na Kahoy"); batangas.push_back("Nasugbu"); batangas.push_back("Padre Garcia");
            batangas.push_back("Rosario");   batangas.push_back("San Jose");  batangas.push_back("San Juan");
            batangas.push_back("San Luis");  batangas.push_back("San Nicolas");   batangas.push_back("San Pascual");
            batangas.push_back("Santa Teresita");  batangas.push_back("Santo Tomas City"); batangas.push_back("Taal");
            batangas.push_back("Talisay");   batangas.push_back("Taysan");    batangas.push_back("Tingloy");
            batangas.push_back("Tuy");

            int count = 1;
            for(auto locations : batangas){
            	if(count <= 9){
            		cout << "  📍 |  " << count << "    " << locations << endl;
            		count++;
            	} else {
            		cout << "  📍 |  " << count << "   " << locations << endl;
            		count++;
            	}
            }
            ss.blankLine();
        }
        void optionBalance(){
        	ss.brokenLines();
        	cout << " Select Balance Options: " << endl;
        	ss.blankLine();
        	cout << "     1    |    Check Balance" << endl;
            cout << "     2    |    Cash-in" << endl;
            ss.blankLine();
        }
    };
};
class allOptions{
public:
	class book_a_transport : public structures{
	public:
		Designs :: setOfDesigns design; // Instantiation from Designs Class
	    Templates :: subTemp templates; // Instantiation from Templates Class
		void vehicleChoice(){
			templates.chooseOption();
			templates.specificVehicle();

			design.enterChoice();
			cin >> vars.vehicleType_Handler;
			design.brokenLines();
			design.blankLine();

			allOptions :: book_a_transport :: parts_of_book_a_transport go; // Instantiation of Motorcycle Class

			if(vars.vehicleType_Handler == 1 || vars.vehicleType_Handler == 2 || vars.vehicleType_Handler == 3 || vars.vehicleType_Handler == 4){
				go.Batangas_locations(vars.vehicleType_Handler);
			} else {
				design.brokenLines();
				design.invalidInput();
				design.blankLine();
			}
		}
		class parts_of_book_a_transport : public structures{
		public:
			Designs :: setOfDesigns design; // Instantiation from Designs Class
		    Templates :: subTemp templates; // Instantiation from Templates Class
			void Batangas_locations(int user_vehicle){
				for(;;){
					templates.locations();

					design.enterChoice();
					cin >> vars.location_Handler;

					design.brokenLines();
					if(vars.location_Handler >= 1 && vars.location_Handler <= 31){
						if(user_vehicle == 1){
							// Proceed to motorcycle availability status
							motorAvailability();
							break;
						} else if(user_vehicle == 2){
							// Proceed to taxi availability status
							taxiAvailability();
							break;
						} else if(user_vehicle == 3){
							// Proceed to van availability status
							vanAvailability();
							break;
						} else if(user_vehicle == 4){
							// Proceed to bus availability status
							busAvailability();
							break;
						}
					} else {
						design.brokenLines();
						design.invalidInput();
						design.blankLine();
					}
				}
			}
			void necessaryInfo(){
				design.brokenLines();
				cout << " 👨️ Please fill-out the \n    necessary information." << endl;
				design.brokenLines();
				design.blankLine();

				structures *pointerVars = &vars;

	        	if(pointerVars -> salary == 0){
	        		srand(time(nullptr));
	        		pointerVars -> salary = rand() % 800;

	        		cout << " 👨️ Your current balance is " << pointerVars -> salary << endl;
	        		design.blankLine();

	        		templates.receipt(pointerVars -> salary);
	        	} else {
					cout << " 👨️ Your current balance is " << pointerVars -> salary << endl;
					design.blankLine();

					templates.receipt(pointerVars -> salary);
	        	}
			}
			void balanceChecking(){
				structure1 *pointerVar = &var;
				structuree *getter_of_menuChoice = &vare;
				structures *pointerVars = &vars;
				if(getter_of_menuChoice -> user_mainMenu_handler == 1){
				design.brokenLines();
				cout << " 👨️ Your current balance is " << pointerVar -> total << endl;
				design.brokenLines();
				} else {
					design.brokenLines();
					cout << " 👨️ Your current balance is " << pointerVars -> salary << endl;
					design.brokenLines();
				}
			}
			void cashIn(){

				design.blankLine();
				cout << " Enter amount you want to cash-in: ";
				cin >> vars.cashAdd;
				design.blankLine();
				cout << " 👨️ Balance updated successfully!" << endl;
				design.blankLine();
				structure1 *pointerVar = &var;
				structuree *getter_of_menuChoice = &vare;
				structures *pointerVars = &vars;

				if(getter_of_menuChoice -> user_mainMenu_handler == 1){
						design.brokenLines();
						cout << " 👨️ Your new balance is P" << (pointerVars -> salary + vars.cashAdd) << endl;
						design.brokenLines();
						design.blankLine();
						pointerVar -> total = (pointerVars -> salary + vars.cashAdd);
				} else if(getter_of_menuChoice -> user_mainMenu_handler == 2){
					if(pointerVars -> balanceChoice_handler == 2){
						design.brokenLines();
						cout << " 👨️ Your new balance is P" << (pointerVars -> salary + vars.cashAdd) << endl;
						design.brokenLines();
						design.blankLine();
						pointerVars -> salary = (pointerVars -> salary + vars.cashAdd);
					}
				}
			}
			void motorAvailability(){
	        	// Generating 4 random numbers
	        	srand(time(nullptr));

	        		int randomNumber = rand() % 2;
	        		int randomNumber2 = rand() % 2;
	        		int randomNumber3 = rand() % 2;
	        		int randomNumber4 = rand() % 2;

	        	if(randomNumber == 0){
	        		cout << "\n  1  |  🟢  Motorcycle 1 is available!" << endl;
	        	} else {
	       			cout << "\n  1  |  🔴  Motorcycle 1 is occupied!" << endl;
	       		}
	       		if(randomNumber2 == 0){
	       			cout << "  2  |  🟢  Motorcycle 2 is available!" << endl;
	       		} else {
	       			cout << "  2  |  🔴  Motorcycle 2 is occupied!" << endl;
	       		}
	       		if(randomNumber3 == 0){
	       			cout << "  3  |  🟢  Motorcycle 3 is available!" << endl;
	       		} else {
	       			cout << "  3  |  🔴  Motorcycle 3 is occupied!" << endl;
	       		}
	       		if(randomNumber4 == 0){
	       			cout << "  4  |  🟢  Motorcycle 4 is available!" << endl;
	       		} else {
	       			cout << "  4  |  🔴  Motorcycle 4 is occupied!" << endl;
	       		}

	        	design.blankLine();
	       		design.enterChoice();
	       		cin >> vars.vehicleAvailability_Handler;
	       		design.brokenLines();
	       		design.blankLine();

	        	if(vars.vehicleAvailability_Handler == 1 && randomNumber == 0){
	        		necessaryInfo();
	       			randomNumber++;
	       		} else if(vars.vehicleAvailability_Handler == 2 && randomNumber2 == 0){
	       			necessaryInfo();
	       			randomNumber2++;
	       		} else if(vars.vehicleAvailability_Handler == 3 && randomNumber3 == 0){
	       			necessaryInfo();
	       			randomNumber3++;
	       		} else if(vars.vehicleAvailability_Handler == 4 && randomNumber4 == 0){
	       			necessaryInfo();
	       			randomNumber4++;
	       		} else {
	   				design.brokenLines();
	   				design.invalidInput();
        		}
	       	}
			void taxiAvailability(){
				// Generating 4 random numbers
				srand(time(nullptr));

					int randomNumber = rand() % 2;
					int randomNumber2 = rand() % 2;
					int randomNumber3 = rand() % 2;
					int randomNumber4 = rand() % 2;

				if(randomNumber == 0){
					cout << "\n  1  |  🟢  Taxi 1 is available!" << endl;
				} else {
					cout << "\n  1  |  🔴  Taxi 1 is occupied!" << endl;
				}
				if(randomNumber2 == 0){
				    cout << "  2  |  🟢  Taxi 2 is available!" << endl;
				} else {
				    cout << "  2  |  🔴  Taxi 2 is occupied!" << endl;
				}
				if(randomNumber3 == 0){
				    cout << "  3  |  🟢  Taxi 3 is available!" << endl;
				} else {
				    cout << "  3  |  🔴  Taxi 3 is occupied!" << endl;
				}
				if(randomNumber4 == 0){
				    cout << "  4  |  🟢  Taxi 4 is available!" << endl;
				} else {
				    cout << "  4  |  🔴  Taxi 4 is occupied!" << endl;
				}

				design.blankLine();
				design.enterChoice();
				cin >> vars.vehicleAvailability_Handler;
				design.brokenLines();
				design.blankLine();

				if(vars.vehicleAvailability_Handler == 1 && randomNumber == 0){
					necessaryInfo();
				    randomNumber++;
				} else if(vars.vehicleAvailability_Handler == 2 && randomNumber2 == 0){
					necessaryInfo();
				    randomNumber2++;
				} else if(vars.vehicleAvailability_Handler == 3 && randomNumber3 == 0){
				   necessaryInfo();
				   randomNumber3++;
				} else if(vars.vehicleAvailability_Handler == 4 && randomNumber4 == 0){
				    necessaryInfo();
				    randomNumber4++;
				} else {
				    design.brokenLines();
				   	design.invalidInput();
				}
			}
			void vanAvailability(){
				// Generating 4 random numbers
				srand(time(nullptr));

					int randomNumber = rand() % 2;
					int randomNumber2 = rand() % 2;
					int randomNumber3 = rand() % 2;
					int randomNumber4 = rand() % 2;

				if(randomNumber == 0){
					cout << "\n  1  |  🟢  Van 1 is available!" << endl;
				} else {
				    cout << "\n  1  |  🔴  Van 1 is occupied!" << endl;
				}
				if(randomNumber2 == 0){
				    cout << "  2  |  🟢  Van 2 is available!" << endl;
				} else {
				    cout << "  2  |  🔴  Van 2 is occupied!" << endl;
				}
				if(randomNumber3 == 0){
				    cout << "  3  |  🟢  Van 3 is available!" << endl;
				} else {
				    cout << "  3  |  🔴  Van 3 is occupied!" << endl;
				}
				if(randomNumber4 == 0){
				    cout << "  4  |  🟢  Van 4 is available!" << endl;
				} else {
				    cout << "  4  |  🔴  Van 4 is occupied!" << endl;
				}

				design.blankLine();
				design.enterChoice();
				cin >> vars.vehicleAvailability_Handler;
				design.brokenLines();
				design.blankLine();

				if(vars.vehicleAvailability_Handler == 1 && randomNumber == 0){
					necessaryInfo();
				    randomNumber++;
				} else if(vars.vehicleAvailability_Handler == 2 && randomNumber2 == 0){
				    necessaryInfo();
				    randomNumber2++;
				} else if(vars.vehicleAvailability_Handler == 3 && randomNumber3 == 0){
				    necessaryInfo();
				    randomNumber3++;
				} else if(vars.vehicleAvailability_Handler == 4 && randomNumber4 == 0){
				    necessaryInfo();
				    randomNumber4++;
				} else {
				    design.brokenLines();
				   	design.invalidInput();
				}
			}
			void busAvailability(){
				// Generating 4 random numbers
				srand(time(nullptr));

					int randomNumber = rand() % 2;
					int randomNumber2 = rand() % 2;
					int randomNumber3 = rand() % 2;
					int randomNumber4 = rand() % 2;

				if(randomNumber == 0){
					cout << "\n  1  |  🟢  Bus 1 is available!" << endl;
				} else {
				    cout << "\n  1  |  🔴  Bus 1 is occupied!" << endl;
				}
				if(randomNumber2 == 0){
				    cout << "  2  |  🟢  Bus 2 is available!" << endl;
				} else {
				    cout << "  2  |  🔴  Bus 2 is occupied!" << endl;
				}
				if(randomNumber3 == 0){
				   cout << "  3  |  🟢  Bus 3 is available!" << endl;
				} else {
				    cout << "  3  |  🔴  Bus 3 is occupied!" << endl;
				}
				if(randomNumber4 == 0){
				    cout << "  4  |  🟢  Bus 4 is available!" << endl;
				} else {
				    cout << "  4  |  🔴  Bus 4 is occupied!" << endl;
				}

				design.blankLine();
				design.enterChoice();
				cin >> vars.vehicleAvailability_Handler;
				design.brokenLines();
				design.blankLine();

				if(vars.vehicleAvailability_Handler == 1 && randomNumber == 0){
					necessaryInfo();
				    randomNumber++;
				} else if(vars.vehicleAvailability_Handler == 2 && randomNumber2 == 0){
				   necessaryInfo();
				    randomNumber2++;
				} else if(vars.vehicleAvailability_Handler == 3 && randomNumber3 == 0){
				    necessaryInfo();
				    randomNumber3++;
				} else if(vars.vehicleAvailability_Handler == 4 && randomNumber4 == 0){
				    necessaryInfo();
				    randomNumber4++;
				} else {
					design.brokenLines();
				   	design.invalidInput();
				}
			}
		};
	};
	class Balance : public structures{
	public:
		Designs :: setOfDesigns design; // Instantiation from Designs Class
	    Templates :: subTemp templates; // Instantiation from Templates Class
		void balanceChoice(){
			templates.optionBalance();
			design.enterChoice();
			cin >> vars.balanceChoice_handler;
			design.brokenLines();

			allOptions :: book_a_transport :: parts_of_book_a_transport go;

			if(vars.balanceChoice_handler == 1){
				go.balanceChecking();
			} else if(vars.balanceChoice_handler == 2){
				go.cashIn();
			} else {
			    design.brokenLines();
			   	design.invalidInput();
			    design.blankLine();
			}
		}
	};
	class account_logOut : public structures{
	public:
		Designs :: setOfDesigns design; // Instantiation from Designs Class
	    Templates :: subTemp templates; // Instantiation from Templates Class
		structures var;
		void accChoice(){
			for(;;){
				design.brokenLines();
				cout << " Select Account Options: " << endl;
				design.blankLine();
				cout << "     1    |    View Profile Info" << endl;
				cout << "     2    |    Report a Problem" << endl;
				design.blankLine();
				design.enterChoice();
				cin >> vars.userAcc_Handler;
				design.brokenLines();

				if(vars.userAcc_Handler == 1){
					personalInfo();
					break;
				} else if(vars.userAcc_Handler == 2){
					design.equalSign();
					cout << "         CONTACT INFORMATION" << endl;
					design.equalSign();
					design.brokenLines();
					design.blankLine();

					cout << " Mobile Number: 09123473094" << endl;
            		design.blankLine();
            		cout << " E-mail Address: deybMendoza@gmail.com" << endl;
            		design.blankLine();
            		design.brokenLines();
            		cout << " 👨️ Submit your report/s using the " << endl
            			 << " contacts presented above, thank you!" << endl;
            		design.brokenLines();
            		break;
				} else {
					design.brokenLines();
					design.invalidInput();
					design.blankLine();
				}
			}
		}
		void personalInfo(){
			structureLS *variableGetter = &varls;
			if(variableGetter -> passID == 12345){
				design.equalSign();
				cout << "        PERSONAL INFORMATION" << endl;
				design.equalSign();
				design.brokenLines();
				design.blankLine();
				cout << "   Mobile Number: +639125689345" << endl;
				design.blankLine();
				cout << "   Passenger ID: 12345" << endl;
				design.blankLine();
				cout << "   Pin: 1234" << endl;
				design.blankLine();
				cout << "   Postal Code: 4234" << endl;
				design.blankLine();
				design.brokenLines();
			} else {
				design.equalSign();
				cout << "        PERSONAL INFORMATION" << endl;
				design.equalSign();
				design.brokenLines();
				design.blankLine();
				cout << "   Mobile Number: +639" << variableGetter -> mNumber << endl;
				design.blankLine();
				cout << "   Passenger ID: " << variableGetter -> passID << endl;
				design.blankLine();
				cout << "   Pin: " << variableGetter -> passPin << endl;
				design.blankLine();
				cout << "   Postal Code: " << variableGetter -> postal << endl;
				design.blankLine();
				design.brokenLines();
			}
		}
	};
};
class mainMenu_Interface{ // CLASS FOR MAIN MENU
public:
	class menu : structuree{
	public:
		Designs :: setOfDesigns design; // Instantiation from Designs Class
	    Templates :: subTemp templates; // Instantiation from Templates Class
		void mainMenu(){
			for(;;){
				templates.displayMenu();
				templates.one_to_four_menu();
				design.enterChoice();
				cin >> vare.user_mainMenu_handler;
				design.brokenLines();
				design.blankLine();

				answerValidation(vare.user_mainMenu_handler);
			}
		}
		void answerValidation(int user_choice_from_mainMenu){
			if(user_choice_from_mainMenu == 1){
				allOptions :: book_a_transport go;
				design.hashtag();
				cout << "           BOOK A TRANSPORT" << endl;
				design.hashtag();
				design.blankLine();

				go.vehicleChoice();

			} else if(user_choice_from_mainMenu == 2){
				allOptions :: Balance go;
				design.hashtag();
				cout << "               BALANCE " << endl;
				design.hashtag();
				design.blankLine();

				go.balanceChoice();

			} else if(user_choice_from_mainMenu == 3){
				allOptions :: account_logOut go;
				design.hashtag();
				cout << "               ACCOUNT " << endl;
				design.hashtag();
				design.blankLine();

				go.accChoice();

			} else if(user_choice_from_mainMenu == 4){
				design.brokenLines();
				cout << "  Exiting... " << endl;
				design.brokenLines();
				design.blankLine();
				exit(0);

			} else {
				design.brokenLines();
				design.invalidInput();
				design.blankLine();
			}
		}
	};
};
class EnterIf_Log_Sign{ // CLASS FOR SIGN-IN AND LOG-IN
public:
    class signLog : public structureLS{
    public:
    	Designs :: setOfDesigns design; // Instantiation from Designs Class
        Templates :: subTemp templates; // Instantiation from Templates Class
        void SorL(){
        	for(;;){
        		templates.signLog_choices();
        		design.enterChoice();
        		cin >> varls.sign_log;
        		design.brokenLines();

        		condition_SorL();
        	}
        }
        void condition_SorL(){
        	inputProper go; // Instantiation from inputProper Class
        	if(varls.sign_log == 1){
        		go.enterSignIn();
        	} else if(varls.sign_log == 2){
        		go.enterLogIn();
        	} else {
				design.brokenLines();
				design.invalidInput();
				design.blankLine();
        	}
        }
    };
    class inputProper : public structureLS{
    public:
    	Designs :: setOfDesigns design; // Instantiation from Designs Class
    	Templates :: subTemp templates; // Instantiation from Templates Class
    	void enterSignIn(){
    		design.blankLine();
    		templates.SignTemplate();
    		templates.personalDetails();

    		templates.mobileNumber();
    		cin >> varls.mNumber;

    		templates.pin();
    		cin >> varls.pin;

    		templates.postalCode();
    		cin >> varls.postal;

    		templates.passID();
    		cin >> varls.id;

    		// Adding the elements to the HashMap
    		credentials.insert({varls.id, varls.pin});

    		design.blankLine();
    		design.brokenLines();
        	design.successfullRegister();

    		for(auto pairs : credentials){
    			Log_after_Sign(pairs.first, pairs.second);
    		}
    	}
    	void Log_after_Sign(int key, int value){

    		templates.LogTemplate();
    	    design.brokenLines();
    	    design.blankLine();

    		templates.passID();
    		cin >> varls.passID;
    		templates.pin();
    		cin >> varls.passPin;
    		design.blankLine();
    		design.brokenLines();

    		if(varls.passID == key && varls.passPin == value){
    			mainMenu_Interface :: menu go; // Go to Main Menu
    			go.mainMenu();
    		} else {
    			design.failedRegister();
    		}
    	}
    	void enterLogIn(){
    		design.blankLine();
    		templates.LogTemplate();
    		templates.personalDetails();

    		templates.passID();
    		cin >> varls.passID;
    		templates.pin();
    		cin >> varls.passPin;
    		design.blankLine();
    		design.brokenLines();

    		if(varls.passID == 12345 && varls.passPin == 1234){
    			mainMenu_Interface :: menu go; // Go to Main Menu
    			for(;;){
    				go.mainMenu();
    			}
    		} else {
    			design.failedRegister();
    		}
    	}
    };
};
int main(void){
    Designs :: setOfDesigns class1;
    class1.intro();
    class1.enter();

    EnterIf_Log_Sign :: signLog class3_sl;

    class3_sl.SorL();
}
