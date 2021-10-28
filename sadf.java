import java.util.Scanner;

public class sadf {

    static boolean isAnagram(String a, String b) {
        // Complete the function
        String c=a;
        String d=b;
        for(int i=0;i<c.length();i++){
            for(int j=i+1;j<c.length();j++){
                if(c.substring(i).compareTo(c.substring(j))>0){
                    if(i!=0 && !(i>c.length()-1)){
                        c=c.substring(0,i)+c.substring(i+1,i+2)+c.substring(i)+c.substring(j+1);
                }else{
                    c=c.substring(i+1,i+2)+c.substring(i,i+1)+c.substring(j+1);
                }
                }
            }
        }
        //for b string...
        for(int i=0;i<d.length();i++){
            for(int j=i+1;j<d.length();j++){
                if(d.substring(i).compareTo(d.substring(j))>0){
                    if(i!=0 && !(i>d.length()-1)){
                        d=d.substring(0,i)+d.substring(i+1,i+2)+d.substring(i)+d.substring(j+1);
                }else{
                    d=d.substring(i+1,i+2)+d.substring(i,i+1)+d.substring(j+1);
                }
                }
            }
        }
        System.out.println(c);
        System.out.println(d);
        if(c.equals(d)){
            return true;
        }else{
            return false;
        }
    }

  public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }}



