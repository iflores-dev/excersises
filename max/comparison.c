extern int max;

int min (int x, int y, int z){

    max = x; 
    if (y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    return max;
}