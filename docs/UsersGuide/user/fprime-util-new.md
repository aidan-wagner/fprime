# Math Component tutorial with fprime-util new

Instead of creating the .xml files by hand, it is possible to use "fprime-util new".

While in the Ref directory use the command:

```
fprime-util new
```

Follow the steps with the following for both the MathReceiver and MathSender:
1. Your full name
2. Your email address
3. Your component name (MathSender or Math Receiver)
4. A description of what the component does
5. The component slug (Same as component name)
6. The component directory name (Same as component name - Option 1)
7. The component_explicit_component_suffix (Component - Option 1)
8. The component_explicit_explicit_common (Nothing- Option 1)
9. The component_impl_suffix (Impl - Option 1)
10. The component path (Ref)
11. The path to the fprime root (../..)
12. The namespace of the component (Ref)
13. The component type (set active for both and then change MathReceiver to queued later in the .xml file)
14. Component multiplatform support (no - Option 1)
15. Liscence (None - Option 1)

This will create the directories and files for the components. Now, cd into the component directories and fill out the .xml files according to the .xml files in the tutorial.

Then you can use:

```
fprime-util impl
```

to generate the implementation files. 

If you receive an error message at this step, try returning to the Ref directory and running:

```
fprime-util purge
fprime-util generate
```

This will regenerate your project and may solve problems with fprime-util impl and fprime-util build.

Once these implementation files are generated, copy them from the "-template" files into the implementation files already in the component directories. Now go through and fill out the implementation files according to the tutorial.

Once you are done with the implementation files and are finished with all of the other steps in the Math Component tutorial, you can build and run your project. From the Ref directory run:

```
fprime-util build
fprime-gds
```

Now you can use the graphic interface the same way that the tutorial describes.

