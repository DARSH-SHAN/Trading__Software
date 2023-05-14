#include<iostream>
#include<ctime>

using namespace std;

int main()
{

    char start;
    float shop(void);
    char choice;

    startL:
        cout<<"Please press H to start shopping for the home appliances"<<endl;
        start:
            cin>>start;

            if(start=='h' || start=='H')
            {
                float total = shop();
                time_t t=time(NULL);
                tm* tPtr=localtime(&t);

                cout<<"Bill Date : ";
                cout<<tPtr->tm_mday<<"/";
                cout<<1 + tPtr->tm_mon<<"/";
                cout<<1900 + tPtr->tm_year<<endl;
                cout<<"Bill Time: "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                cout<<"Total Bill Amount : "<<total<<endl;
                if(total>50000 && 100000)
                {
                    total=total-(0.05*total);
                    cout<<"Total discount : 5%"<<endl;
                }
                else if(total>100000 && 125000)
                {
                    total=total-(0.1*total);
                    cout<<"Total discount : 10%"<<endl;
                }
                else if(total>125000 && 150000)
                {
                    total=total-(0.25*total);
                    cout<<"Total discount : 25%"<<endl;
                }
                else if(total>150000)
                {
                    total=total-(0.5*total);
                    cout<<"Total discount : 50%"<<endl;
                }
                cout<<"Total Bill Amount is : "<<total<<endl;
                Again:
                    cout<<"Do you want shopping again Y or N "<<endl;
                    cin>>choice;
                    if(choice=='y' || choice=='Y')
                    {
                        goto startL;
                    }
                    else if(choice=='n' || choice=='N')
                    {
                        cout<<"Thanks for shopping"<<endl;
                    }
                    else
                    {
                        cout<<"you have entered the wrong option"<<endl;
                        goto Again;

                    }

            }
            else
            {
                cout<<"You have entered wrong option, please press H to start again"<<endl;
                goto start;
            }
}

            float shop()
            {

                shop:
                    char choice;
                    char product;
                    int quantity;
                    float bill=0;

                        cout<<"***********Welcome************"<<endl;
                        cout<<"___Please follow the Instructions___"<<endl;
                        cout<<"| 1)Please enter r to order Refrigerator"<<endl;
                        cout<<"| 2)Please enter w to order Washing machine"<<endl;
                        cout<<"| 3)Please enter t to order Television"<<endl;
                        cout<<"| 4)Please enter m to order Microwave"<<endl;
                        cout<<"| 5)Please enter a to order Air Conditioner"<<endl;
                        cin>>choice;

                        if(choice=='r' || choice=='R' || choice=='w' || choice=='W' || choice=='t' || choice=='T' || choice=='m' || choice=='M' || choice=='a' || choice=='A')
                        {
                            if(choice=='r' || choice=='R')
                            {
                                refrigerator:
                                cout<<"______Refrigerator Details_______"<<endl;
                                cout<<" 1) Whirlpool => price: 40000 |"<<endl;
                                cout<<" 2) Samsung   => price: 25000 |"<<endl;
                                cout<<" 3) Haier     => price: 20000 |"<<endl;
                                cout<<" 4) Voltas    => price: 18000 |"<<endl;
                                cout<<" 5) Godrej    => price: 30000 |"<<endl;
                                cout<<" 6) Panasonic => price: 35000 |"<<endl;

                                cout<<"Please enter your choice : "<<endl;
                                cin>>product;
                                if(product=='1')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*40000;
                                }
                                else if(product=='2')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*25000;
                                }
                                else if(product=='3')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*20000;
                                }
                                else if(product=='4')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*18000;
                                }
                                else if(product=='5')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='6')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*35000;
                                }
                                else
                                {
                                    cout<<"You have entered the wrong option, please try again"<<endl;
                                    goto refrigerator;
                                }

                            }
                            if(choice=='w' || choice=='W')
                            {
                                WashingMachine:
                                cout<<"______Washing Machine Details_______"<<endl;
                                cout<<" 1) Bosch      => Price: 40000 |"<<endl;
                                cout<<" 2) LG         => Price: 25000 |"<<endl;
                                cout<<" 3) IFB        => Price: 20000 |"<<endl;
                                cout<<" 4) Hair       => Price: 58000 |"<<endl;
                                cout<<" 5) Maytag     => Price: 30000 |"<<endl;
                                cout<<" 6) Samsung    => Price: 45000 |"<<endl;

                                cout<<"Please enter your choice"<<endl;
                                cin>>product;
                                if(product=='1')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*40000;
                                }
                                else if(product=='2')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*25000;
                                }
                                else if(product=='3')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*20000;
                                }
                                else if(product=='4')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*58000;
                                }
                                else if(product=='5')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='6')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*45000;
                                }
                                else
                                {
                                    cout<<"You have entered the wrong option, please try again"<<endl;
                                    goto WashingMachine;
                                }
                        }
                        if(choice=='t' || choice=='T')
                            {
                                television:
                                cout<<"______Television Details_______"<<endl;
                                cout<<" 1) Sony        => Price: 50000 |"<<endl;
                                cout<<" 2) LG          => Price: 55000 |"<<endl;
                                cout<<" 3) Samsung     => Price: 30000 |"<<endl;
                                cout<<" 4) TCL         => Price: 58000 |"<<endl;
                                cout<<" 5) Sharp       => Price: 30000 |"<<endl;
                                cout<<" 6) Panasonic   => Price: 42000 |"<<endl;

                                cout<<"Please enter your choice"<<endl;
                                cin>>product;
                                if(product=='1')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*50000;
                                }
                                else if(product=='2')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*55000;
                                }
                                else if(product=='3')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='4')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*58000;
                                }
                                else if(product=='5')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='6')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*42000;
                                }
                                else
                                {
                                    cout<<"You have entered the wrong option, please try again"<<endl;
                                    goto television;
                                }
                            }
                            if(choice=='m' || choice=='M')
                            {
                                MicroWave:
                                cout<<"______Microwave Details_______"<<endl;
                                cout<<" 1) Samsung       => Price: 30000 |"<<endl;
                                cout<<" 2) LG            => Price: 45000 |"<<endl;
                                cout<<" 3) Panasonic     => Price: 30000 |"<<endl;
                                cout<<" 4) Bajaj         => Price: 48000 |"<<endl;
                                cout<<" 5) IFB           => Price: 30000 |"<<endl;
                                cout<<" 6) Whirlpool     => Price: 42000 |"<<endl;

                                cout<<"Please enter your choice"<<endl;
                                cin>>product;
                                if(product=='1')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='2')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*45000;
                                }
                                else if(product=='3')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='4')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*48000;
                                }
                                else if(product=='5')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='6')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*42000;
                                }
                                else
                                {
                                    cout<<"You have entered the wrong option, please try again"<<endl;
                                    goto MicroWave;
                                }
                            }
                            if(choice=='a' || choice=='A')
                            {
                                AirConditioner:
                                cout<<"______Airconditioner Details_______"<<endl;
                                cout<<" 1) Daikin        => Price: 50000 |"<<endl;
                                cout<<" 2) Voltas        => Price: 50000 |"<<endl;
                                cout<<" 3) Samsung       => Price: 30000 |"<<endl;
                                cout<<" 4) Hitachi       => Price: 40000 |"<<endl;
                                cout<<" 5) Lloyd         => Price: 30000 |"<<endl;
                                cout<<" 6) Panasonic     => Price: 45000 |"<<endl;

                                cout<<"Please enter your choice"<<endl;
                                cin>>product;
                                if(product=='1')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*50000;
                                }
                                else if(product=='2')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*50000;
                                }
                                else if(product=='3')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='4')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*40000;
                                }
                                else if(product=='5')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*30000;
                                }
                                else if(product=='6')
                                {
                                    cout<<"Please enter the quantity of the product"<<endl;
                                    cin>>quantity;
                                    bill=bill+quantity*45000;
                                }
                                else
                                {
                                    cout<<"You have entered the wrong option, please try again"<<endl;
                                    goto AirConditioner;
                                }
                            }
                        }
                        else
                        {
                            cout<<"You have entered the wrong option, please try again"<<endl;
                            goto shop;
                        }
                        return bill;
                        }

