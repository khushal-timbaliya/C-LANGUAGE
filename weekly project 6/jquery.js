// $(window).scroll(function(){
//     if($(document).scrollTop()>100){
//         $("nav").css("height","10vh")
//         $("nav").css("background-color","white")
//         $("nav").css("box-shadow","rgba(0, 0, 0, 0.35) 0px 5px 15px")
//     }
//     else{
//         $("nav").css("height","20vh")
//         $("nav").css("background-color","transparent")
//         $("nav").css("box-shadow","none")
//     }

// })

$(document).ready(function(){

// nav

$(window).scroll(function()
{
    $('nav').toggleClass('background',$(this).scrollTop()>100);
});

$(".menu").click(function(){
    $('.menubox').toggle('tgl')
})

// header

var swiper = new Swiper(".mySwiper", {
  spaceBetween: 30,
  centeredSlides: true,
  autoplay: {
    delay: 2500,
    disableOnInteraction: false,
  },
  pagination: {
    el: ".swiper-pagination",
    clickable: true,
  },
  navigation: {
    nextEl: ".swiper-button-next",
    prevEl: ".swiper-button-prev",
  },
});

// first

var swiper = new Swiper(".mySwiper2", {
  slidesPerView: 1,
  spaceBetween: 10,
  pagination: {
    el: ".swiper-pagination",
    clickable: true,
  },
  breakpoints: {
    640: {
      slidesPerView: 2,
      spaceBetween: 20,
    },
    768: {
      slidesPerView: 4,
      spaceBetween: 40,
    },
    1024: {
      slidesPerView: 4,
      spaceBetween: 50,
    },
  },
});

// sixth

var swiper = new Swiper(".mySwiper3", {
  slidesPerView: 2,
  spaceBetween: 30,
  autoplay:true,
  autoplaySpeed:1000,
  pagination: {
    el: ".swiper-pagination",
    clickable: true,
  },
});

})
