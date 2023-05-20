     char name[]="Anil";
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90)&& !(name[i]>=90 && name[i]<=122) && !(name[i]>=48 &&name[i]<=57))  //string validation
        {
          cout<<"Invalid string";
        }
    }
cout<<"valid string";
