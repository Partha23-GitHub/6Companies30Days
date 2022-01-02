string encode(string src)
{      
  int n = src.length();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && src[i] == src[i + 1]) {
            count++;
            i++;
        }
        cout << src[i] << count;
    }
}     
 
