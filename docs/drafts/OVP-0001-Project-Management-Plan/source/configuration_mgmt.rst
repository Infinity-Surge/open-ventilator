Configuration Management
========================
While this will be covered in more detail in the "Software Configuration
Management Plan," this section presents the high-level approach we
are taking to configuration management.

Software configuration management
---------------------------------
All source code, project files, documentation, and design artifacts will 
be stored in a git repository.

In said repositories, the master branch is stable and only holds tagged 
releases.  This branch should only contain stable production quality code.

The development branch contains the next version of the software.  Changes
are to be merged into the development branch.

Pull requests shall be utilitized as a means of judiciously limiting direct
code commits to our branches, without a review of the changes.

Documentation configuration management
--------------------------------------
This section present the documentation management rules for all documents sent 
or received during the Open Ventilator project.


