#include<iostream>
using namespace std;
//-----------------------------------------------
char white[9];
char red[9];
char orange[9];
char blue[9];
char green[9];
char yellow[9];
//----------------------------------
void display(char face[9])
{
  for(int i=0;i<9;i++)
  {
    cout<<face[i]<<" ";
  }
  cout<<endl<<endl;
}
void swap(char &a,char &b)
{
    char t=a;
    a=b;
    b=t;
}
void rotate_clock(char choice)
{
  if (choice=='w')
  {
    cout<<"White"<<endl;
    swap(white[7],white[3]);
    swap(white[6],white[4]);
    swap(white[0],white[2]);
    swap(white[7],white[5]);
    swap(white[0],white[4]);
    swap(white[1],white[3]);
    //-------------------------
    swap(blue[0],orange[0]);
    swap(blue[7],orange[7]);
    swap(blue[6],orange[6]);
    swap(orange[6],green[6]);
    swap(orange[7],green[7]);
    swap(orange[0],green[0]);
    swap(green[6],red[6]);
    swap(green[7],red[7]);
    swap(green[0],red[0]);
  }
  //-------------------------
  else if(choice=='r')
  {
    cout<<"Red"<<endl;
    swap(red[0],red[4]);
    swap(red[7],red[5]);
    swap(red[1],red[3]);
    swap(red[0],red[6]);
    swap(red[1],red[5]);
    swap(red[2],red[4]);
    //-------------------------
    swap(blue[6],white[3]);
    swap(blue[5],white[2]);
    swap(blue[4],white[1]);
    swap(white[1],green[0]);
    swap(white[2],green[1]);
    swap(white[3],green[2]);
    swap(green[0],yellow[3]);
    swap(green[1],yellow[2]);
    swap(green[2],yellow[1]);
    //--------------------------
  }
  //-----------------------------------
  else if(choice=='y')
  {
    cout<<"Yellow"<<endl;
    swap(yellow[1],yellow[5]);
    swap(yellow[2],yellow[4]);
    swap(yellow[0],yellow[6]);
    swap(yellow[1],yellow[3]);
    swap(yellow[0],yellow[4]);
    swap(yellow[7],yellow[5]);
    //--------------------------
    swap(blue[4],red[4]);
    swap(blue[3],red[3]);
    swap(blue[2],red[2]);
    swap(red[2],green[2]);
    swap(red[3],green[3]);
    swap(red[4],green[4]);
    swap(green[4],orange[4]);
    swap(green[3],orange[3]);
    swap(green[2],orange[2]);
    //--------------------------
  }
  //-------------------------------------
  else if(choice=='o')
  {
    cout<<"Orange"<<endl;
    swap(orange[4],orange[0]);
    swap(orange[3],orange[1]);
    swap(orange[5],orange[7]);
    swap(orange[4],orange[2]);
    swap(orange[5],orange[1]);
    swap(orange[6],orange[0]);
    //--------------------------
    swap(blue[2],yellow[5]);
    swap(blue[1],yellow[6]);
    swap(blue[0],yellow[7]);
    swap(yellow[5],green[6]);
    swap(yellow[6],green[5]);
    swap(yellow[7],green[4]);
    swap(green[6],white[7]);
    swap(green[5],white[6]);
    swap(green[4],white[5]);
    //--------------------------
  }
  //-------------------------------------
  else if(choice=='g')
  {
    cout<<"Green"<<endl;
    swap(green[6],green[2]);
    swap(green[5],green[3]);
    swap(green[7],green[1]);
    swap(green[4],green[6]);
    swap(green[7],green[3]);
    swap(green[0],green[2]);
    //--------------------------
    swap(white[5],orange[2]);
    swap(white[4],orange[1]);
    swap(white[3],orange[0]);
    swap(yellow[3],orange[2]);
    swap(yellow[4],orange[1]);
    swap(yellow[5],orange[0]);
    swap(yellow[3],red[6]);
    swap(yellow[4],red[5]);
    swap(yellow[5],red[4]);
    //--------------------------
  }
  //-------------------------------------------
  else if(choice=='b')
  {
    cout<<"Blue";
    swap(blue[1],blue[7]);
    swap(blue[2],blue[6]);
    swap(blue[5],blue[3]);
    swap(blue[2],blue[0]);
    swap(blue[7],blue[3]);
    swap(blue[6],blue[4]);
    //--------------------------
    swap(yellow[1],orange[4]);
    swap(yellow[0],orange[5]);
    swap(yellow[7],orange[6]);
    swap(white[7],orange[4]);
    swap(white[0],orange[5]);
    swap(white[1],orange[6]);
    swap(white[7],red[0]);
    swap(white[0],red[1]);
    swap(white[1],red[2]);
    //--------------------------
  }
}