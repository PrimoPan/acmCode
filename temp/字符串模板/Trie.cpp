#include <cstdio>

const int N = 500010;

char s[60];
int n, m, ch[N][26], tag[N], tot = 1;

int main() {
  scanf("%d", &n);

  for (int i = 1; i <= n; ++i) {
    scanf("%s", s + 1);
    int u = 1;
    for (int j = 1; s[j]; ++j) {
      int c = s[j] - 'a';
      if (!ch[u][c])
        ch[u][c] =
            ++tot;  // �������ڵ���ӽڵ���û������ַ�������ϲ������ַ��Ľڵ�ż�¼Ϊ++tot
      u = ch[u][c];  // ������һ������
    }
    tag[u] = 1;  // ���һ���ַ�Ϊ�ڵ� u ������δ�����ʵ���¼Ϊ 1
  }

  scanf("%d", &m);

  while (m--) {
    scanf("%s", s + 1);
    int u = 1;
    for (int j = 1; s[j]; ++j) {
      int c = s[j] - 'a';
      u = ch[u][c];
      if (!u) break;  // �����ڶ�Ӧ�ַ��ĳ���˵�����ֲ�����
    }
    if (tag[u] == 1) {
      tag[u] = 2;  // ���һ���ַ�Ϊ�ڵ� u �������Ѿ�������
      puts("OK");
    } else if (tag[u] == 2)  // �Ѿ������ʣ��ظ�����
      puts("REPEAT");
    else
      puts("WRONG");
  }

  return 0;
}