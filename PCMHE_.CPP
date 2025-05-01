#include<stdio.h>
#include<conio.h>
void main()
{
  int p,c,m,h,e,total;
  float per;
  clrscr();
  printf("Enter Marks Of Physics\n");
  scanf("%d",&p);
  printf("Enter Marks Of Chemistry\n");
  scanf("%d",&c);
  printf("Enter Marks Of Maths\n");
  scanf("%d",&m);
  printf("Enter Marks Of Hindi\n");
  scanf("%d",&h);
  printf("Enter Marks Of English\n");
  scanf("%d",&e);
  total=p+c+m+h+e;
  printf("Total is %d\n",total);
  per=total/5.0;
  printf("Percentage is %f\n",per);
  if(p<33&&c<33&&m<33&&h<33&&e<33)
    printf("Failed In All Subject");
  else
  {
    if(p<33&&c<33)
      printf("failed In Physics and Chemistry");
    else
    {
      if(p<33&&m<33)
	printf("Failed In Physics And Maths");
      else
      {
	if(p<33&&h<33)
	  printf("Failed In Physics and Hindi");
	else
	{
	  if(p<33&&e<33)
	    printf("Failed In Physics And English");
	  else
	  {
	    if(c<33&&m<33)
	      printf("Failed In Chemistry and Maths");
	    else
	    {
	      if(c<33&&h<33)
		printf("Failed In chemistry and Hindi");
	      else
	      {
		if(c<33&&e<33)
		  printf("Failed In Chemistry And English");
		else
		{
		  if(m<33&&h<33)
		    printf("Failed In Maths And Hindi");
		  else
		  {
		    if(m<33&&e<33)
		      printf("Failed In Maths And English");
		    else
		    {
		      if(h<33&&e<33)
			printf("Failed In Hindi And English");
		      else
		      {
			if(per>=60)
			  printf("Pass In First Division");
			else
			{
			  if(per>=45)
			    printf("Pass In Second division");
			  else
			    printf("Pass In Third Division");



			}




		      }




		    }




		  }


		}



	      }



	    }


	  }



	}


      }



    }




  }
  getch();








}