void mx_printchar(char c);
void print_sqr(int t, int w, int i, int j, int h, int n){
  if((i == t  || i == h - 1) && (j == 0 || j == w -  1)){
    mx_printchar('+');
  }
  else if((i == t || i == h - 1) && (j == 0 || j < w - 1)){
    mx_printchar('-');
  }
  else if((j == 0 || j == w - 1) && (i != h - 1 || i != t) && i > t){
    mx_printchar('|');
  } 
  else if((i == 0 && j == t) || (i == 0 && j == w + t - 1) || (j == w + t - 1 && i == h - t - 1)){
     mx_printchar('+');
  }
  else if((i == t - j && j < t) || (i < t && j == w + t - i - 1)) {
     mx_printchar('/');
  }
  else if( i == 0 && j > t){
    mx_printchar('-');
  }
  else if(i == h - t + w - j + t - 2 && j > w - 1) {
    mx_printchar('/');
  }
  else if(j == w + t - 1 && i < n + 1) {
    mx_printchar('|');
  }
  else if (i < h - t + w - j + t - 2) {
    mx_printchar(' ');
  }
}

void mx_cube(int n){
  int t = n / 2 + 1;
  int h = n +2 + t;
  int w = n * 2 + 2;
  if (n < 2)
    return;
  for(int i = 0 ; i < h; i++){
    for(int j = 0; j < w + t; j++){
      print_sqr(t,  w, i, j, h, n); 
    }
    mx_printchar('\n');
  }
}
