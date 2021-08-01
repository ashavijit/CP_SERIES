import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int[][] a = new int[4][4];
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                a[i][j] = kb.nextInt();
            }
        }
        boolean flag = false;
        for(int i = 0; i < 4; i++) {
            if(a[i][3] == 1 && (a[i][2] == 1 || a[i][1] == 1 || a[i][0] == 1 || a[(i+1)%4][0] == 1 || a[(i+2)%4][1] == 1 || a[(i+3)%4][2] == 1)) {
                flag = true;
            }
        }
        if(flag) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
