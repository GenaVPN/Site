$(function() {
    $('.slider').slick({
        infinite: true,
        slidesToShow: 3,
        slidesToScroll: 1,
        draggable: false,
        arrows: false,
        responsive:[
            {
                breakpoint: 850,
                settings: {
                    slidesToShow:1,
                    slidesToScroll:1,
                }
            }
        ]
    });
    $('#arrow-right').on('click', function() {
        $('.slider').slick('slickNext');
    });
    $('#arrow-left').on('click', function() {
        $('.slider').slick('slickPrev');
    });
})

$(function() {
    $('.slider2').slick({
        infinite: true,
        slidesToShow: 2,
        slidesToScroll: 1,
        draggable: false,
        arrows: false,
        responsive:[
            {
                breakpoint: 850,
                settings: {
                    slidesToShow:1,
                    slidesToScroll:1,
                }
            }
        ]
    });
    $('#right').on('click', function() {
        $('.slider2').slick('slickNext');
    });
    $('#left').on('click', function() {
        $('.slider2').slick('slickPrev');
    });
})










// $(document).ready(function() {
// 	$('.header__burger').click(function(event) {
// 		$('.slider, .slider2').toggleClass('active');
// 		$('body').toggleClass('lock');
// 	});
// });