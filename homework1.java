// Scanner1.java
    import java.util.Scanner;

    class Main {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            int num;
            int sum1;
            System.out.printf("정수를 입력하세요");
            num = sc.nextInt();
            sum1 = num;
            System.out.println("현재까지 입력된 정수의 합은 "+ sum1 + "입니다.");
            System.out.printf("정수를 입력하세요");
            num = sc.nextInt();
            sum1 += num;
            System.out.println("현재까지 입력된 정수의 합은 "+ sum1 + "입니다.");
            System.out.printf("정수를 입력하세요");
            num = sc.nextInt();
            sum1 += num;
            System.out.println("현재까지 입력된 정수의 합은 "+ sum1 + "입니다.");
            System.out.printf("정수를 입력하세요");
            num = sc.nextInt();
            sum1 += num;
            System.out.println("현재까지 입력된 정수의 합은 "+ sum1 + "입니다.");
            System.out.printf("정수를 입력하세요");
            num = sc.nextInt();
            sum1 += num;
            System.out.println("현재까지 입력된 정수의 합은 "+ sum1 + "입니다.");
        }
    }
