<!DOCTYPE html>
<html lang="en">

	<head>
		<meta charset="utf-8">
		<meta name="viewport" content="width=device-width, initial-scale=1.0"/>
		<title><?php echo $currentTitle ?></title>

		<link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
 		<link href="css/materialize.css" type="text/css" rel="stylesheet" media="screen"/>
  		<link href="css/override.css" type="text/css" rel="stylesheet" media="screen"/>
	</head>

	<body>

		<nav class="light-blue">
			<div class="nav-wrapper container"><a id="logo-container" href="index.php" class="brand-logo"><img src="images/ur.png" class="logo" alt="logo"></a>
				<a href="#" data-activates="mobile-demo" class="button-collapse"><i class="material-icons">menu</i></a>
				<ul class="right hide-on-med-and-down">
					<li><a href="hillarychun.php">Hillary Chun</a></li>
					<li><a href="rosecricchio.php">Rose Cricchio</a></li>
					<li><a href="torimadway.php">Tori Madway</a></li>
				</ul>

				<ul class="side-nav" id="mobile-demo">
					<li><a href="hillarychun.php">Hillary Chun</a></li>
					<li><a href="rosecricchio.php">Rose Cricchio</a></li>
					<li><a href="torimadway.php">Tori Madway</a></li>
      			</ul>
			</div>
		</nav>

		<header class="section no-pad-bot" id="index-banner">
			<h1 class="header center red-text"><?php echo $currentTitle ?></h1>
		</header>