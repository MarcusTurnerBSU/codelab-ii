# Creating a Project from Existing Code - Xcode

This guide outlines the steps for creating a project from existing code. This might be useful if you have submitted some code to GitHub and want to continue working on the code from a different computer. You will need these steps as the project solution files are ignored by GitHub desktop and only the code files are submitted. The steps below will allow you to regenerate the required project files on a different computer and run your existing code.

&nbsp;
&nbsp;

## Step 1

In Xcode go to ```File → New → Project```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/new-project.png">
</p>

&nbsp;
&nbsp;

## Step 2

Ensure top tab is on ```macOS```, select ```Command Line Tool``` & click ```Next```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/command-line.png">
</p>

&nbsp;
&nbsp;

## Step 3

Set the options for your project:
* Give the product a name slightly different from your existing project you wish to regenerate (e.g. "usb-shopper-v2")
* Set organisation identifiers (e.g. com.yourname)
* Set language as C++
* Click ```Next```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/project-info.png">
</p>

&nbsp;
&nbsp;

## Step 4

Browse to the exercise folder that includes the original project and click ```create```, then close Xcode.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/create-project.png">
</p>

&nbsp;
&nbsp;

## Step 5

You will now have two similarly named projects in the exercises folder

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/two-project.png">
</p>

&nbsp;
&nbsp;

## Step 6

Go into the original project folder and locate the existing code file. Depending whether the original project was made on Visual Studio or Xcode this is likely to either be named ```Source.cpp``` or ```main.cpp```. If it is named ```Source.cpp``` right click and rename it ```main.cpp```

Right click this file and select ```Copy main.cpp```

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/copy-file.png">
</p>

&nbsp;
&nbsp;

## Step 7

Now go into the project folder you just created (e.g. ```usb-shopper-v2```) and locate the folder containing the ```main.cpp``` file for this project. Right click inside this folder and select ```paste item```


<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/paste-file.png">
</p>

&nbsp;
&nbsp;

## Step 8

Select replace on the pop-up warning message.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/replace.png">
</p>

&nbsp;
&nbsp;

## Step 9

You can now open this new project in Xcode by opening the ```.xcodeproj``` file (e.g. ```usb-shopper-v2.xcodeproj```) and make any new edits or simply run the code.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/new-file.png">
</p>

&nbsp;
&nbsp;

## Step 10

As you have created a fresh project, you can now safely delete the original project folder.

<p align="center">
  <img width="70%" src="https://jakehobbs.co.uk/markdown_images/move-bin.png">
</p>
