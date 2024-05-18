$(document).ready(function () {
    $(".tab__item").click(function (e) {
        e.preventDefault();
        $(".tab__item").removeClass("tab__item--active");
        $(".tab__item-text").removeClass("tab__item-text--active");
        $(this).addClass("tab__item--active");
        $($(this).attr("href")).addClass("tab__item-text--active");
    })
    $(".tab__item.tab__item--active").click()
})