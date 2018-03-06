    import java.util.*;
    public class test {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            
            int n = in.nextInt();
            int m = in.nextInt();
            
            Deque deque = new ArrayDeque<>(m);
            HashMap<Integer, Integer> map = new HashMap<>();

            int max = 0;
            for (int i = 0; i < n; i++) {
                int num = in.nextInt();
                
                if (map.get(num) == null) {
                    map.put(num,1);
                } else {
                    int val = map.get(num);
                    map.put(num, val+1);
                }
                
                if (deque.size() == m) {
                    int arka = (int) deque.removeFirst();
                    int val = map.get(arka);
                    if (val == 1) {
                        map.remove(arka);
                    } else {
                        map.put(arka, val -1);
                    }
                }
                
                deque.addLast(num);
                
                int u = 0;
                // get unique element count
                u = map.size();
                if (u > max) max = u;
            }
            System.out.println(max);
        }
    }
