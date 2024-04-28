$(function ($) {
  "use strict";

  jQuery(document).ready(function () {

    
    // Click To Scroll 
    $(".nav-link").click(function () {
      $(".nav-link").removeClass("active");
      $(this).addClass("active");
    }); 
    
    // Click To Scroll 
    $(".mein-menu .navbar-nav a").on("click", function (event) {
      var $anchor = $(this);
      $("html, body")
        .stop()
        .animate(
          {
            scrollTop: $($anchor.attr("href")).offset().top - 80,
          },
          100
        );
      event.preventDefault();
    });


    /* niceSelect */
    $("select").niceSelect();

    /* Wow js */
    new WOW().init();
    
    /* Matrix tweenMax js */
    $(".banner").on('mousemove', function (e) {
      parallaxIt(e, ".move", 45);
    });

    function parallaxIt(e, target, movement) {
      var $this = $(".banner");
      var relX = e.pageX - $this.offset().left;
      var relY = e.pageY - $this.offset().top;

      TweenMax.to(target, 1, {
        x: (relX - $this.width() / 2) / $this.width() * movement,
        y: (relY - $this.height() / 2) / $this.height() * movement
      });
    }  
    
    /* testimonial-slider */
    var $testo = $(".testo-box");
    $testo.owlCarousel({
      loop: true,
      nav: true,
      navText: [
        '<i class="fas fa-arrow-left"></i>',
        '<i class="fas fa-arrow-right"></i>',
      ],
      dots: true,
      autoplayTimeout: 4000,
      smartSpeed: 1200,
      autoplay: true,
      responsive: {
        0: {
          items: 1
        },
        576: {
          items: 1
        },
        768: {
          items: 1
        },
        992: {
          items: 2
        },
        1199: {
          items: 2
        },
        1200: {
          items: 2
        }
      }
    });

    /*back to top-*/
    $(document).on("click", "#scrollUp", function () {
      $("html,body").animate({
          scrollTop: 0,
        },
        100
      );
    });

    /* sticky navigation menu */
    var lastScrollTop = "";
    $(window).on("scroll", function () {
      var $window = $(window);
      if ($window.scrollTop() > 0) {
        $(".mein-menu").addClass("nav-fixed");
      } else {
        $(".mein-menu").removeClass("nav-fixed");
      }

      /*---------------------------
         back to top show / hide
     ---------------------------*/
      var st = $(this).scrollTop();
      if ($(window).scrollTop() > 500) {
        $("#scrollUp").fadeIn();
      } else {
        $("#scrollUp").fadeOut();
      }
      lastScrollTop = st;
    });

  });

  $(window).on("load", function () {
    /*Preloader*/
    $('.preloader').fadeOut(1000);
    var img = $('.bg_img');
    img.css('background-image', function () {
      var bg = ('url(' + $(this).data('background') + ')');
      return bg;
    });
  });
});