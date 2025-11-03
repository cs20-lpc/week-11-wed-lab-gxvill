template <typename T>
int HashTableClosed<T>::insert(const T& key)
{
    // TO DO:
	
	int count = 0;
	for(int i = 0; i < M; ++i){
		int index = probeIndex(key, count);
		count ++;
		if(occupied[index] == false){
			table[index] = key;
			occupied[index] = true;
			return count;
		}
	}
		
    return 0;
}

template <typename T>
pair<bool, int> HashTableClosed<T>::search(const T& key) const
{
    // TO DO: 
	int count = 0;
	for(int i = 0; i < M; ++i){
		int index = probeIndex(key, count);
		count++;
		if(occupied[index] == false){
			return {false, count};
		}
		if(table[index] == key){
			return {true, count};
		}
	}
    return {false, count};
}
