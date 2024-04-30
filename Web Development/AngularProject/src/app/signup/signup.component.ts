import { Component } from '@angular/core';
import { Router } from '@angular/router';
import $ from 'jquery';
@Component({
  selector: 'app-signup',
  templateUrl: './signup.component.html',
  styleUrl: './signup.component.css'
})
export class SignupComponent {
  constructor(private router: Router) { }
ngOnInit(){
  $(document).ready(()=>{
    $("#submit").click(()=> {
        var email = $('#email').val();
        var password = $('#password').val();
        var confirmPassword = $('#confirm-password').val();
        var state = $('#state').val();
        var constituency = $('#constituency').val();
        var voterId = $('#voter-id').val();
        var address = $('#address').val();
        var pincode = $('#pincode').val();

        var emailPattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;

        if (typeof email === 'string' && (!email || !emailPattern.test(email))) {
            $("#msg").html("Invalid Email");
            return;
        }

        if (typeof password === 'string' && (!password || password.length < 8)) {
            $("#msg").html("Password should be at least 8 characters");
            return;
        }

        if (password != confirmPassword) {
            $("#msg").html("Password and Confirm Password should be the same");
            return;
        }

        if (!state || !constituency || !voterId || !address || !pincode) {
            $("#msg").html("All fields are required");
            return;
        }

        // If all validations pass, you can submit the form or navigate to another page
        this.router.navigate(['/login']);
    });
});
}
}
