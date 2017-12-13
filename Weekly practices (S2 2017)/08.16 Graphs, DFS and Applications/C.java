import java.util.ArrayList;
import java.util.Scanner;

public class C_Party {

    public static Integer treeHeight(ArrayList<Integer> u, ArrayList<ArrayList> graph) {
        if (u.size() == 0) {
            return 0;
        } else {
            int maxDepth = 0;
            for (int i : u) {
                ArrayList tree = graph.get(i - 1);
                int height = treeHeight(tree, graph);
                if (height > maxDepth) {
                    maxDepth = height;
                }
            }
            return maxDepth + 1;
        }
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);

        int n = Integer.parseInt(reader.nextLine());

        ArrayList G = new ArrayList<ArrayList>();
        for (int i = 0; i < n; i++) {
            G.add(new ArrayList<Integer>());
        }

        ArrayList roots = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            int parent = Integer.parseInt(reader.nextLine());
            if (parent == -1) {
                roots.add(i + 1);
            } else {
                ArrayList g = (ArrayList) G.get(parent - 1);
                g.add(i + 1);
            }
        }

        int maxHeight = 0;
        for (int i = 0; i < roots.size(); i++) {
            int height = treeHeight((ArrayList<Integer>) G.get((int) roots.get(i) - 1), G);
            if (height > maxHeight) {
                maxHeight = height;
            }
        }
        System.out.println(maxHeight + 1);

    }


}
