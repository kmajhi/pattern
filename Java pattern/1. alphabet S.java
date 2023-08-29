public class Main {
    public static void main(String[] args) {
        int n = 5;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= 1 && i <= 5) {
                    if (i == 2) {
                        if (j == 1) {
                            System.out.print("* ");
                        } else {
                            System.out.print(" ");
                        }
                    } else if (i == 4) {
                        if (j == 5) {
                            System.out.print("\t*");
                        } else {
                            System.out.print(" ");
                        }
                    } else {
                        System.out.print("* ");
                    }
                }
            }
            System.out.println();
        }
    }
}
