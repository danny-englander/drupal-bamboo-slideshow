#Drupal Bamboo Slideshow Documentation

Bamboo Slideshow is a Feature (module) for [Drupal 7](http://drupal.org/project/drupal). It uses Views, Views Slideshow and Flexslider so it's responsive out of the box. You can [see a demo of it here](http://bamboo.themehuis.com/bamboo-featured-content-slideshow). Bamboo Slideshow is a companion module for the [Bamboo theme](http://drupal.org/project/bamboo) on drupal.org by [Danny Englander](http://highrockmedia.com/) ([@Danny_Englander](https://twitter.com/Danny_Englander)) The Feature works well with the Bamboo theme but should also work well with other Drupal 7 themes. 

##Required third party Drupal modules and library (As of August, 2014)
* [Entity API](http://drupal.org/project/entity) - 7.x-1.5
* [Entity Reference](http://drupal.org/project/entityreference) - 7.x-1.1
* [Features](http://drupal.org/project/features) - 7.x-2.1
* [Libraries api](http://drupal.org/project/libraries) - 7.x-2.2
* [Views](http://drupal.org/project/views) - 7.x-3.8
* [Chaos tool suite (ctools)](http://drupal.org/project/ctools) - 7.x-1.4
* [Strongarm (ctools)](https://www.drupal.org/project/strongarm) - 7.x-2.0
* [Views Slideshow](http://drupal.org/project/views_slideshow) - 7.x-3.1
* [FlexSlider Views Slideshow](http://drupal.org/project/flexslider_views_slideshow) - 7.x-2.x-dev
* [Flexslider (the Drupal Module)](http://drupal.org/project/flexslider) - 7.x-2.0-alpha3
* [Flexslider 2.x (The library from WooThemes)](http://flexslider.woothemes.com/)

1. Install the third party modules above as usual.
See [Installing contributed modules (Drupal 7)](http://drupal.org/documentation/install/modules-themes/modules-7) for more info. 
You can download these all at once if you have Drush installed:

```
drush dl entityreference, strongarm, entity, features, libraries, views, ctools, views_slideshow, flexslider_views_slideshow, flexslider

```
You will still need to download the Flexslider library from Woothemes.
2. Download and install the Flexslider library in */sites/all/libraries*.  After download, it will look like "woothemes-FlexSlider-06b12f8" or similar. You should rename this folder to "flexslider", all lower case so your final end result is */sites/all/libraries/flexslider*.
3. Install the Bamboo Slideshow Feature (this module) as per above or if you have a "custom" directory under /modules. Be sure to rename the unzipped / untarred "bamboo_slideshow-7.x-2.x" to just "bamboo_slideshow"

**Typical locations for Drupal modules:**

* */sites/mysite.com/modules*
* */sites/all/modules/contrib*
* */sites/all/modules*

##Notes

* When you activate the Bamboo slideshow module, you will be prompted to activate the dependent modules. Be sure to agree to this option to activate these dependent modules. 
* Tested with Drupal 7.30

##Create Slideshow Content

Now that you have installed everything (and hopefully it went well :), create some content. 

"Content > Add content > Bamboo Featured" (which is the name of the new content type this module creates after activation.) Or simply go to /node/add/bamboo-featured. 

### -- Node Fields
When you create slideshow content, there are a number of fields to be aware of. 

**Title** - standard Drupal title which ends up as the title of the slide. 

**Slide Text** - This is the text displayed in under the slide. The slideshow truncates this at 110 characters so ideally you should not enter any more than that. 

**Content Link Reference** - This field option is if you would like to link your slide to another piece of existing content in your site. This option is ideal if retrofitting the slideshow to an existing site that has a lot of content. For this option, use the **View: Featured Slideshow: Content Reference Slideshow Block** on the blocks admin page. 

**Page content** -- This field option is if you would like to have your slideshow linked to the origin node itself. For this option, use the **View: Featured Slideshow: Link-to-self Slideshow Block** on the blocks admin page. 

For more info, refer to [the screen capture](https://raw.github.com/highrockmedia/bamboo_slideshow/7.x-1.x/assets/node-edit.png) that illustrates the fields above and what they do. There are also three sample images you can use in the included assets folder, the same ones that are used in the demo. 

##Choose and Place a Slideshow Block
The Feature creates two blocks as mentioned above. You can see these on the blocks admin page or at */admin/structure/block*

1. **View: Featured Slideshow: Link-to-self Slideshow Block**
2. **View: Featured Slideshow: Content Reference Slideshow Block**

Use the first block if you are using the **Page Content field**, use the second block if you are using the **Content Link Reference** option. See "Node Fields" above for more info. Ideally you want to place this in a block region that is a full width of your theme. In the Bamboo theme, the region is called "Hero 1"

##Updating Bamboo Slideshow
To update the Bamboo Slideshow feature, follow these steps:

1. [Download the feature](https://github.com/highrockmedia/drupal-bamboo-slideshow) from the repo
2. Rename the unzipped / untarred "bamboo_slideshow-7.x-2.x" to just "bamboo_slideshow" and replace the old one with this new one wherever you have it in your site. i.e. */sites/all/modules*
4. Clear your Drupal cache
3. Go to your drupal Features admin page and check to see if Bamboo Slideshow has been overridden at: /admin/structure/features
4. If 3 above is true (most likely), click on "overridden", check any boxes and save by clicking "Revert Feature".
5. Clear your Drupal cache once again. 

-----

##Support
This Feature is free and licensed under GPL. However, if you require support, I can offer this on a paid basis either hourly or per project. Please do not open an issue for this in the Bamboo issue queue on drupal.org, [contact me directly](http://highrockmedia.com/contact-us). 

