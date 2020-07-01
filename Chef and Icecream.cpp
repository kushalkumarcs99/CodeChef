 #include <bits/stdc++.h>
using namespace std;

int main()

{
	int T;
	cin >> T;
	while (T--)
		{
			int n;
			cin >> n;
			vector<int> a(n);
			for (int i = 0; i < n; i++)
				cin >> a[i];
			int changefive_count = 0, changeten_count = 0;

			for (int i = 0; i < n; i++)
			{
				if (a[i] == 5)
					changefive_count++;
				else if (a[i] == 10)
				{
					changeten_count++;
					changefive_count--;
					if (changefive_count < 0)
					break;
				}
				else
				{
					if (changeten_count > 0)
					changeten_count--;
					else
					changefive_count -= 2;
					if (changefive_count < 0 || changeten_count < 0)
					break;
				}
			}
			if (changefive_count >= 0 && changeten_count >= 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	return 0;
}
