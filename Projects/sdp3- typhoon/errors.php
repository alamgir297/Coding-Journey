<?php if(isset($_POST['reg_user'])) :?>
    <?php if(count($erros)>0) : ?>
        <div>
            <?php foreach($erros as $erros) : ?>
                <p><?php echo $erros ?></p>
            <?php endforeach ?>
        </div>
    <?php endif ?>
    
<?php endif ?>


<?php if(isset($_POST['login_user'])) :?>
    <?php if(count($login_error)>0) : ?>
        <div>
            <?php foreach($login_error as $erros) : ?>
                <p><?php echo $erros ?></p>
            <?php endforeach ?>
        </div>
    <?php endif ?>
    
<?php endif ?>

<?php if(isset($_POST['forgot'])) :?>
    <?php if(count($validation)>0) : ?>
        <div>
            <?php foreach($validation as $erros) : ?>
                <p><?php echo $erros ?></p>
            <?php endforeach ?>
        </div>
    <?php endif ?>
    
<?php endif ?>

<?php if(isset($_POST['forgot'])) :?>
    <?php if(count($dAlert)>0) : ?>
        <div>
            <?php foreach($dAlert as $erros) : ?>
                <p><?php echo $erros ?></p>
            <?php endforeach ?>
        </div>
    <?php endif ?>
    
<?php endif ?>