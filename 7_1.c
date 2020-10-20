#include <stdio.h>

int dol = 100;

void dec_item(int n)
{
	static int cnt_d = 0;
	dol = dol - n;
	cnt_d = cnt_d+1;
	printf("판매는 %d번 되었습니다.\n",cnt_d);
}

void inc_item(int n)
{
	static int cnt_i = 0;
	dol = dol +n;
	cnt_i = cnt_i+1;
	printf("입고는 %d번 되었습니다.\n",cnt_i);
}

void print_item()
{
	static int cnt_j = 0;
	cnt_j = cnt_j +1;
	printf("재고는 %d개 입니다.\n재고확인은 %d번 되었습니다.\n",dol, cnt_j);
}

void print_stat()
{
	printf("총 재고는 %d개 입니다\n", dol);
}

int main ()
{
	int opt;
	int n;
	while(1){
		printf("판매:1, 입고:2, 재고확인:3, 종료:4 ");
		scanf("%d",&opt);

		if (opt<3 && opt>0){
			printf("수량을 입력하시오 : ");
			scanf("%d", &n);
		}

		switch(opt){
		case 1: 
        	dec_item (n); 
        	break; 
        case 2: 
            inc_item (n); 
            break; 
        case 3: 
            print_item();
            break; 
        case 4: 
       		goto out; 
        default: 
  	    	printf("잘못 선택함\n");
           }
       }
      
out: 
       print_stat(); 
       return 0; 
}





