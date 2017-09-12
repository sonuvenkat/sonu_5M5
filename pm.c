
void AlphabetSort(char name[3][8])
{
    int i,ret;
    char temp[8];
    for(i=0;i<1;i++)
    {
        if(strcmp(name[i]>name[i+1])
           {
               temp=name[i];
               name[i]=name[i+1];
               name[i+1]=temp;
           }
           }
           for(i=0;i<2;i++)
           printf("%s",name[i]);
           }
           
        
    
} 

void stringReverse(char ch[])             
{             
    int i=0,j=0;
    char  temp;
   while(ch[i]!='\0')
   {
       i++;
   }
    while(j<i-1)
    {
      temp=ch[j];
        ch[j]=ch[i];
        ch[i]=ch[j];
        j++;
        i--;
    }
    printf("%s",ch);
        
}

void MilkBottles(int Demand)
{   
    int demand=Demand,a=0,b=0,c=0,d=0;
    while(demand>0)
    {

  a = demand/ 10 ; 
  demand = demand % 10;
  b= demand/ 7; 
  demand = demand % 7;
  c= demand/ 5 ; 
  demand = demand % 5;
  d = demand/ 1 ; 
    }
 
  printf("%d",a+b+c+d);      
}                                                                             
