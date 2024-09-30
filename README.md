<body>
    <h1>Libft - Your Very First Own Library</h1>
    <p>
        The <strong>Libft</strong> project is a foundational coding project in C that challenges you to recreate a standard library of commonly used functions. 
        These functions are designed to provide basic utilities for handling strings, memory, lists, and input/output, which can then be reused in future projects. 
        By building this library from scratch, you gain a deeper understanding of how C works at a low level, reinforcing concepts like memory management, pointer manipulation, and algorithm optimization.
    </p>

  <h2>Installation</h2>
    <p>To start using Libft, follow these steps:</p>
            Clone the repository:
            <pre><code>git clone git@github.com:sereeny/libft.git
cd libft</code></pre>
            Compile the library:
            <pre><code>make</code></pre>
                This command will create an archive file named <code>libft.a</code> in the project directory, which contains all the compiled functions. 
                If you want to include bonus functions, run:
            <pre><code>make bonus</code></pre>
            This will add the bonus functions into the library.</p>

  <h3>Clean up:</h3>
    <p>
        If you need to remove the compiled object files and the library archive, you can run:
        <pre><code>make clean</code></pre>
        To remove everything, including the archive, use:
        <pre><code>make fclean</code></pre>
    </p>
</body>
