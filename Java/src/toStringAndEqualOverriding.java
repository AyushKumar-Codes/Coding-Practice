class Book {
    private String title;
    private String author;

    public Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    // Override toString() to provide a meaningful string representation
    @Override
    public String toString() {
        return "Book [title=" + title + ", author=" + author + "]";
    }

    // Override equals() to compare Book objects based on title and author
    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true; // Same object reference
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false; // Not the same class or null object
        }
        Book otherBook = (Book) obj; // Cast to Book object
        return title.equals(otherBook.title) && author.equals(otherBook.author);
    }
}
public class toStringAndEqualOverriding {
    public static void main(String[] args) {
        Book book1 = new Book("The Lord of the Rings", "J.R.R. Tolkien");
        Book book2 = new Book("The Lord of the Rings", "J.R.R. Tolkien");
        Book book3 = new Book("The Hitchhiker's Guide to the Galaxy", "Douglas Adams");

        // Comparing objects using equals()
        System.out.println(book1.equals(book2)); // true (same content)
        System.out.println(book1.equals(book3)); // false (different content)

        // Printing object representation using toString()
        System.out.println(book1); // Book [title=The Lord of the Rings, author=J.R.R. Tolkien]
    }
}
