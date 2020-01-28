#include <stdio.h>
#include <conio.h>
int calc3puiss (int i)
	{
		if (i==0)
		{
			return 1 ;
		}
		else
		{
			return 3*calc3puiss (i-1) ;
		}
	}

  int main ()
  {
	  int result;
	  result = calc3puiss(3);
	  printf("%d", result);
	  getch();
	  return 0;
  }

