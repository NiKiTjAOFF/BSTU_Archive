$(document).ready(function () {
    let validEmail = /^([a-zA-Z0-9_.+-])+\@(([a-zA-Z0-9-])+\.)+([a-zA-Z0-9]{2,4})+$/;
    $('#form1 .form__email-input').focus(function () {
        $('.form__email-warning').removeClass("form__email-warning-active");
        $('.form__password-warning').removeClass("form__password-warning-active");
    })
    $('#form1 .form__password-input').focus(function () {
        $('.form__password-warning').removeClass("form__password-warning-active");
        $('.form__email-warning').removeClass("form__email-warning-active");
    })
    $('#form1 .form__submit').click(function (elem) {
        elem.preventDefault();
        if (validEmail.test($('#form1 .form__email-input').val()) != true) {
            $('#form1').submit(function (e) {
                e.preventDefault();
            });
            $('.form__email-warning').addClass("form__email-warning-active");
        } else {
            $('.form__email-warning').removeClass("form__email-warning-active");
        }
        if ($('#form1 .form__password-input').val().length <= 5) {
            $('#form1').submit(function (e) {
                e.preventDefault();
            })
            $('.form__password-warning').addClass("form__password-warning-active");
        } else {
            $('.form__password-warning').removeClass("form__password-warning-active");
        }
        if (validEmail.test($('#form1 .form__email-input').val()) && $('#form1 .form__password-input').val().length > 5) {
            $(".success").addClass("success-active");
        }
    })
    console.log($('#form1'));
})