public class Main {
    public static void main(String[] args) {
        int n = 5;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= 1 && i <= 4) {
                    if (j >= 2 && j <= 4) {
                        System.out.print("  ");
                    } else {
                        System.out.print("* ");
                    }
                } else if (i==5){
                    if (j==1 || j==5){
                        System.out.print("  ");
                    } else {
                        System.out.print("* ");
                    }
                } else{
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}
