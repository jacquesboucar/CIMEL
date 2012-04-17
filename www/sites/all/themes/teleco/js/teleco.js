/* $Id$ */

sfHover = function() {
	var sfEls = document.getElementById("primary-inner").getElementsByTagName("LI");
	for (var i=0; i<sfEls.length; i++) {
		sfEls[i].onmouseover=function() {
			this.className+=" sfhover";
		}
		sfEls[i].onmouseout=function() {
			this.className=this.className.replace(new RegExp(" sfhover\\b"), "");
		}
	}
}
if (window.attachEvent) window.attachEvent("onload", sfHover);


$(document).ready(function() {
  // Delayed mouseout.
  $('#primary-inner li').hover(function() {
    // Stop the timer.
    clearTimeout(this.sfTimer);
    // Display child lists.
    $('> ul', this).css({left: '', display: 'block'})
      // Immediately hide nephew lists.
      .parent().siblings('li').children('ul').css({left: '', display: 'none'});
  }, function() {
    // Start the timer.
    var uls = $('> ul', this);
    this.sfTimer = setTimeout(function() {
      uls.css({left: '-999em', display: 'none'});
    }, 400);
  });
});
