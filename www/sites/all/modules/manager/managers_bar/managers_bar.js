
Drupal.behaviors.managersBar = function(context) {
  var $document = $('body', context);
  var $managersBar = $('#managers-bar', context);
  
  if ($managersBar.length) {
    var managersBarHeight = $managersBar.height();
    var documentHeight = parseInt($document.css('margin-top')) + managersBarHeight;
    
    $document.css('margin-top', documentHeight);
  }
}