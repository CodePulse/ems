<!DOCTYPE html>
<html
  style="font-family: 'Helvetica Neue', 'Helvetica', Helvetica, Arial, sans-serif; font-size: 100%; line-height: 1.2em; margin: 0; padding: 0;">
<head>
  <meta name="viewport" content="width=device-width">
  <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
  <title>Advanced Process Modelling Forum 2017</title>

</head>
<body>
<div><?php print t('Dear ') . $name . ',' ?></div>
<br>
<div><?php print t('Thank you for your registration for the 2017 Advanced Process Modelling Forum at the Chelsea Harbour Hotel, London.') ?></div>
<br>

<div><?php print t('Order number: ') .  '<strong>'.$order_id.'</strong>'; ?></div>
<br>

<h2><?php print t('Order details:'); ?></h2>
<div><?php print $webform; ?></div>
<br>

<div><?php print t('If you are attending a workshop, please bring your laptop on the day and note that these will be held in Hammersmith (check for details on ') . l(t('the website'), 'https://www.psenterprise.com/events/uk/2017/apmf/workshops') . ').'; ?> </div>
<br>

<div><?php print t('If you need any additional information please contact the Event Manager, Sophie Gillespie at s.gillespie@psenterprise.com. We look forward to seeing you at the APM Forum.'); ?> </div>
<br>

<div><?php print t('Kind regards,') ?></div>
<div><?php print t('PSE') ?></div>

</html>
