<?php
// $Id: template.php,v 1.10.4.3 2010/12/14 03:30:39 danprobo Exp $
function dancimel_page_class($sidebar_first, $sidebar_second) {
	if ($sidebar_first && $sidebar_second) {
		$id = 'layout-type-2';	
	}
	else if ($sidebar_first || $sidebar_second) {
		$id = 'layout-type-1';
	}

	if(isset($id)) {
		print ' id="'. $id .'"';
	}
}


