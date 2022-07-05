

template <typename T>
bool easyfind(const T &c, int n) {
	return (find(c.begin(), c.end(), n) != c.end());
}