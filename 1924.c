#include <stdio.h>
int main(){
	int month,day,jan=1;
	char *WEEK[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	scanf("%d %d",&month,&day);
	while(jan<month){
		if(jan==2)
			day+=28;
		else if((jan<8 && jan%2==1)||(jan>=8 && jan%2==0))
			day+=31;
		else
			day+=30;
		jan++;
	}
	printf("%s\n",WEEK[day%7]);
	return 0;
}
