import java.util.*;

public class E_Reposts {
    private static HashMap<String, ArrayList> graph = new HashMap<>();

    public static Integer treeHeight(String u) {
        if (graph.containsKey(u)) {
            if (graph.get(u).size() == 0) {
                return 0;
            } else {
                int maxDepth = 0;
                for (Object i : graph.get(u)) {
                    int height = treeHeight(String.valueOf(i));
                    if (height > maxDepth) {
                        maxDepth = height;
                    }
                }
                return maxDepth + 1;
            }
        } else
            return 0;
    }

    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        int n = Integer.parseInt(reader.nextLine());


        graph.put("polycarp", new ArrayList<String>());

        for (int i = 0; i < n; i++) {
            ArrayList post = new ArrayList<>(Arrays.asList(reader.nextLine().split("\\s")));
            String child = post.get(0).toString().toLowerCase();
            String parent = post.get(2).toString().toLowerCase();

            if (!graph.containsKey(parent)) {
                graph.put(parent, new ArrayList<String>());
            }
            graph.get(parent).add(child);
        }

//        System.out.println(graph.entrySet());
        System.out.println(treeHeight("polycarp") + 1);
    }
}