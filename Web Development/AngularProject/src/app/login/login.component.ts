import { Component} from '@angular/core';
import $ from 'jquery';
import { Router } from '@angular/router';
@Component({
  selector: 'app-login',
  templateUrl: './login.component.html',
  styleUrl: './login.component.css',

})
export class LoginComponent {
  constructor(private router: Router) { }
  ngOnInit(){
    $(document).ready(() => {
      $("#submit").click(() => { // Use arrow function here
        $("#msg").html("");
        var email = $('#email').val();
        var password = $('#password').val();

        var emailPattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
        var chkEmail = false;
        if (typeof email === 'string' && emailPattern.test(email)) {
          chkEmail = true;
        }

        if ((typeof password === 'string' && password.length >= 8 )&& chkEmail) {
          this.router.navigate(['/dashboard']);
        } else if (chkEmail && (typeof password === 'string' && password.length <= 8)) {
          $("#msg").append("Invalid Password");
        }else if (!chkEmail && (typeof password === 'string' && password.length >= 8)) {
          $("#msg").append("Invalid Emaild");
        } 
        else {
          $("#msg").append("Invalid Email and Password");
        }
      });
    });
  }

}
