private static void solve(FastReader in) {
        int n = in.nextInt();
        char ch[] = in.next().toCharArray();
        if (ch[0] == '0'  ch[1] == '0'  ch[n]=='0') {
            out.println("No");
            return;
        }
        int a[] = new int[n];
        Queue<Integer> q = new LinkedList<>();
        q.add(0);
        for (int i = 1; i < ch.length; i++) {
            if (ch[i] == '1') {
                assert q.isEmpty();
                a[i - 1] = q.poll();
                q.add(i);
            } else {
                a[i - 1] = i;
            }
        }
        out.println("Yes");
        for (int v : a)
            out.print(v + " ");
        out.println();

    }