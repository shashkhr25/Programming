##include <stdio.h>
int main(void) {
	int px,py,qx,qy,rx,ry;
	scanf("%d %d %d %d", &px,&py,&qx,&qy);
	rx= ((qx-px)*2)+px;
	ry=((qy-py)*2)+py;
	printf("%d %d", rx,ry);
    return 0;
    
    // Make sure to add for origin replacement.
}
