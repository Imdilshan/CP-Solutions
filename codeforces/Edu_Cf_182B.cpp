// Using set O(nlogn)
void solve(){
  int n;
  cin >> n;
  
  vector<int> v(n);
  set<int> s;
  vector<int> zero;
  for(int i = 0; i < n; i++){
    cin >> v[i]; 
    s.insert(v[i]);
    if(v[i] == 0) zero.pb(i);
  }
  
  for(int i = n, j = 0; i >= 1; i--){
    if(s.count(i) == 0){
      v[zero[j]] = i;
      j++;
    }
  }

  int first = -1, last = -1;
  for(int i = 0; i < n; i++){
    if(v[i] != i+1 ){
      if(first == -1) first = i;
      last = i;
    }
  }
  if(first == last){
    cout << 0 << endl;
  }
  else{
    cout << last - first + 1 << endl;
  }
}


// Using Frequency array O(n)
void solve(){
  int n;
  cin >> n;
  
  vector<int> v(n), zero, freq(n+1,0);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    freq[v[i]]++;
    if(v[i] == 0) zero.pb(i);
  }
  
  for(int i = n, j = 0; i >= 1; i--){
    if(freq[i] == 0){
      v[zero[j]] = i;
      j++;
    }
  }
 
  int first = -1, last = -1;
  for(int i = 0; i < n; i++){
    if(v[i] != i+1 ){
      if(first == -1) first = i;
      last = i;
    }
  }
  if(first == last){
    cout << 0 << endl;
  }
  else{
    cout << last - first + 1 << endl;
  }
}
